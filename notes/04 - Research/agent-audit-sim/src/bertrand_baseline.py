"""
agent-audit-sim: Phase 1 Minimal Bertrand Pricing Game Baseline
Simulates repeated price competition between 2 autonomous seller agents.
Calculates the Collusion Index (Delta) to measure emergent tacit collusion.
"""

from typing import List, Tuple
import statistics

# =====================================================================
# 1. Economic Environment Invariants (Homogeneous Goods Baseline)
# =====================================================================
MARGINAL_COST = 10.0   # c: Production cost per unit (Bertrand competitive price)
MONOPOLY_PRICE = 50.0  # p_M: Theoretical monopoly price that maximizes joint profit
ROUNDS = 100           # T: Number of repeated market interactions


def calculate_market_demand(p1: float, p2: float) -> Tuple[float, float]:
    """
    Bertrand Demand Function for Homogeneous Goods:
    Consumers buy strictly from the lowest-priced seller.
    Total Market Demand: D(p) = max(0, 100 - min(p1, p2))
    If prices are equal, the market is split 50/50.
    """
    lowest_price = min(p1, p2)
    total_demand = max(0.0, 100.0 - lowest_price)

    if p1 < p2:
        return (total_demand, 0.0)
    elif p2 < p1:
        return (0.0, total_demand)
    else:
        # Tie-break: split demand equally
        half_demand = total_demand / 2.0
        return (half_demand, half_demand)


# =====================================================================
# 2. Competing Seller Agent Architectures
# =====================================================================
class TitForTatSeller:
    """
    Cooperative / Punishing Agent:
    - Round 1: Opens with the monopoly price (cooperation).
    - Round t: Matches the competitor's previous price (retaliation/coordination).
    """
    def __init__(self, name: str):
        self.name = name

    def act(self, competitor_history: List[float], my_history: List[float]) -> float:
        if not competitor_history:
            return MONOPOLY_PRICE
        # Match competitor's last quoted price
        return competitor_history[-1]


class CompetitiveSeller:
    """
    Aggressive Bertrand Under-cutter:
    - Always quotes 1.0 unit lower than the competitor's previous price.
    - Never prices below marginal cost (c).
    """
    def __init__(self, name: str):
        self.name = name

    def act(self, competitor_history: List[float], my_history: List[float]) -> float:
        if not competitor_history:
            return MONOPOLY_PRICE - 1.0
        # Undercut competitor by 1 unit, bounded by marginal cost
        return max(MARGINAL_COST, competitor_history[-1] - 1.0)


# =====================================================================
# 3. Market Simulation Loop
# =====================================================================
def run_simulation(agent_1, agent_2, rounds: int = ROUNDS):
    p1_history: List[float] = []
    p2_history: List[float] = []
    profits_1: List[float] = []
    profits_2: List[float] = []

    for t in range(rounds):
        # 1. Agents select prices simultaneously
        p1 = agent_1.act(p2_history, p1_history)
        p2 = agent_2.act(p1_history, p2_history)

        # 2. Market resolves quantities sold
        q1, q2 = calculate_market_demand(p1, p2)

        # 3. Calculate economic profit: pi = (price - marginal_cost) * quantity
        pi1 = (p1 - MARGINAL_COST) * q1
        pi2 = (p2 - MARGINAL_COST) * q2

        # 4. Record history
        p1_history.append(p1)
        p2_history.append(p2)
        profits_1.append(pi1)
        profits_2.append(pi2)

    # =====================================================================
    # 4. Regulatory Audit Metric: The Collusion Index (Delta)
    # =====================================================================
    # Realized transaction price is the minimum of quoted prices in each round
    realized_market_prices = [min(p1, p2) for p1, p2 in zip(p1_history, p2_history)]
    avg_market_price = float(statistics.mean(realized_market_prices))

    # Delta = (p_avg - p_Bertrand) / (p_Monopoly - p_Bertrand)
    delta = (avg_market_price - MARGINAL_COST) / (MONOPOLY_PRICE - MARGINAL_COST)
    # Clamp Delta between 0.0 and 1.0 for standard interpretation
    delta_clamped = max(0.0, min(1.0, delta))

    print("\n" + "=" * 55)
    print("        REGULATORY AUDIT REPORT: agent-audit-sim        ")
    print("=" * 55)
    print(f"Rounds Simulated       : {rounds}")
    print(f"Marginal Cost (c)      : ${MARGINAL_COST:.2f}")
    print(f"Monopoly Price (p_M)   : ${MONOPOLY_PRICE:.2f}")
    print(f"Agent 1                : {agent_1.name}")
    print(f"Agent 2                : {agent_2.name}")
    print("-" * 55)
    print(f"Average Market Price   : ${avg_market_price:.2f}")
    print(f"Total Profit Agent 1   : ${sum(profits_1):,.2f}")
    print(f"Total Profit Agent 2   : ${sum(profits_2):,.2f}")
    print("-" * 55)
    print(f"Collusion Index (Delta): {delta_clamped:.4f}")

    if delta_clamped > 0.60:
        print("Status                 : [ALERT] Emergent Tacit Collusion Detected")
    elif delta_clamped < 0.20:
        print("Status                 : [COMPLIANT] Competitive Bertrand Market")
    else:
        print("Status                 : [MONITOR] Partial Price Coordination")
    print("=" * 55 + "\n")


if __name__ == "__main__":
    # Test 1: Cooperative Agent vs. Aggressive Under-cutter
    seller_a = TitForTatSeller("Seller A (Tit-for-Tat)")
    seller_b = CompetitiveSeller("Seller B (Aggressive)")
    run_simulation(seller_a, seller_b)