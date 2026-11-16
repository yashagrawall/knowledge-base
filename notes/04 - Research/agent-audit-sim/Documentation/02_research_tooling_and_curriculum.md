# Research Infrastructure, Tooling & Minimal Viable Curriculum

## 1. Executive Summary & Core Principle

This document establishes the engineering infrastructure, academic tooling pipeline, and domain curriculum for `agent-audit-sim`. 

**The Core Principle:** You are an applied computer science systems engineer building a discrete-event simulation wind tunnel and quantitative auditing harness. You are **not** an economist deriving equilibrium theorems from scratch, nor a legal scholar drafting statutory commentary. You do not need semester-long coursework in economics, antitrust law, or game theory. You only need the discrete mathematical contracts and statutory thresholds that constrain the system's state machine.

---

## 2. Academic Tooling Pipeline: Zotero & Overleaf Integration

To eliminate context switching and paper-drafting friction, the project enforces a tightly bound literature-to-manuscript toolchain:

```
┌────────────────────────┐      Better BibTeX      ┌────────────────────────┐
│     ZOTERO DESKTOP     │ ──────────────────────► │ `paper/references.bib` │
│  (8 Canonical Papers)  │       Auto-Export       │   (Git / Overleaf)     │
└────────────────────────┘                         └───────────┬────────────┘
                                                               │
                                                               ▼
┌────────────────────────┐   Matplotlib / Scripts  ┌────────────────────────┐
│   `agent-audit-sim`    │ ──────────────────────► │   OVERLEAF MANUSCRIPT  │
│  (Simulation Engine)   │     Vector Graphics     │  (ACM `acmart` Format) │
└────────────────────────┘                         └────────────────────────┘
```

### 2.1 Zotero Configuration & Reference Ingestion
1. **Desktop Client:** Install Zotero 10+ on Linux (`sudo apt install zotero` or download the official tarball from zotero.org to `/opt/zotero`). Install the **Zotero Connector** browser extension in Chrome/Brave/Firefox.
2. **Better BibTeX (BBT) Plugin Installation (.xpi):**
   - Download the latest `zotero-better-bibtex-*.xpi` release from GitHub (`retorquere/zotero-better-bibtex/releases/latest`).
   - In Zotero, navigate to **Tools** $\to$ **Plugins** (or **Add-ons**).
   - Click the gear icon in the top right $\to$ **Install Add-on From File...** $\to$ select the downloaded `.xpi` file.
   - Restart Zotero when prompted.
   - Open **Edit** $\to$ **Settings** $\to$ **Better BibTeX** tab $\to$ set Citation Key Generator pattern to:
     `[auth:lower][year][veryshorttitle:lower]`
   - Generates deterministic keys: `calvano2020artificial`, `klein2021autonomous`, `kahneman1979prospect`, `fish2024algorithmic`.
3. **Dedicated Collection & Scope Taxonomy:**
   - Create a top-level collection named `agent-audit-sim`.
   - Under `agent-audit-sim`, create exactly 3 bounded sub-collections (literature scopes):
     - `01_economic_collusion` (Calvano 2020, Klein 2021, Fish 2024)
     - `02_cognitive_heuristics` (Kahneman-Tversky 1979, Gigerenzer 2011)
     - `03_eu_governance_auditing` (Regulation 2024/1689, Lundberg-Lee 2017, Hardt 2016, Asker 2022)
4. **Scope Constraint:** Store **only** the 9 canonical papers referenced in Section 10 of `GEMINI.md`. Do not hoard adjacent literature without code relevance.
5. **Automated BibTeX Sync (Auto-Export to Git / Overleaf):**
   - Right-click `agent-audit-sim` collection $\to$ **Export Collection...**
   - Format: **Better BibTeX**, check **Keep updated**.
   - Target location: Save as `agent-audit-sim/paper/references.bib` (or direct path synced to Overleaf).
   - Every time a paper is added or modified in Zotero, BBT re-writes `references.bib` automatically on disk without manual exports.
6. **The 3-Color Annotation Protocol (PDF Reading Filter):**
   - **Yellow (Mathematical Invariants):** Specific equations, objective functions, state spaces, action grids, and reward functions.
   - **Blue (Empirical Parameters):** Learning rate ($\alpha$), discount factor ($\delta$), exploration decay ($\beta$), number of rounds ($T$), marginal cost ($c$).
   - **Red (Systemic Vulnerabilities & Regulatory Gaps):** Statutory loopholes, proof of explicit intent hurdles under Article 101 TFEU, unaddressed market conditions.
   - *Rule:* If an entire paper contains no Yellow, Blue, or Red highlights, it is discarded from citations.

### 2.2 Overleaf Manuscript Architecture
1. **Target Venue & Template:** ACM Primary Article Template (`acmart`).
   - Preamble class: `\documentclass[sigconf,anonymous,review]{acmart}` (ready for ACM FAccT or AAMAS).
2. **Concurrent Writing Protocol:** Code and paper are authored simultaneously. The paper is the formal specification document, not an afterthought.
3. **Directory Layout:**
   ```
   paper/
   ├── main.tex                       # Core document root
   ├── acmart.cls                     # ACM style class
   ├── references.bib                 # Synced directly from Zotero
   ├── figures/                       # Vector PDF figures exported from Python
   │   ├── fig1_bertrand_dynamics.pdf
   │   ├── fig2_delta_convergence.pdf
   │   └── fig3_shap_attribution.pdf
   └── sections/
       ├── 01_introduction.tex        # The Tri-Disciplinary Paradox
       ├── 02_related_work.tex        # Algorithmic collusion & EU AI Act literature
       ├── 03_market_model.tex        # Bertrand formulation & Folk Theorem bounds
       ├── 04_agent_architectures.tex # Q-learning, Prospect Theory & Heuristics
       ├── 05_auditing_engine.tex     # Collusion Index (Δ), Lerner Index, SHAP DAG
       ├── 06_empirical_results.tex   # Monte Carlo sweeps & parameter sensitivity
       └── 07_regulatory_verdict.tex  # Articles 9, 10, 14, 51 compliance audit
   ```

---

## 3. The Minimal Viable Curriculum (The Systems Engineer's Syllabus)

```
┌────────────────────────────────────────────────────────────────────────┐
│                        WHAT YOU MUST KNOW                              │
├─────────────────────────┬──────────────────────────────────────────────┤
│ Linear Demand Curve     │ D(p) = max(0, 100 - min(p1, p2))             │
│ Bertrand Nash Eq.       │ p1* = p2* = c = $10.00  (Zero Profit)        │
│ Monopoly Optimum        │ p^M = (a + b·c) / (2b) = $55.00              │
│ Folk Theorem Bound      │ δ ≥ 0.5 sustains Grim Trigger Cartel         │
│ Collusion Index         │ Δ = (p̄ - c) / (p^M - c)                      │
│ Lerner Index            │ L = (p̄ - c) / p̄                              │
│ Q-Learning Update       │ Q(s,a) ← Q(s,a) + α[π + δ max Q(s',a') - Q]  │
│ EU AI Act Mapping       │ Articles 9, 10, 14, 51                       │
└─────────────────────────┴──────────────────────────────────────────────┘
```

### 3.1 Microeconomics & Game Theory
- **MUST KNOW:**
  1. **Bertrand Paradox (Static Baseline):** In a market with homogeneous goods and symmetric marginal costs $c$, two competing firms undercutting each other drive price down to marginal cost ($p = c$). Economic profit is zero.
  2. **Monopoly Price ($p^M$):** Maximizes joint industry profit $(p - c)(a - bp)$. For $a = 100, b = 1, c = 10$:
     $$\frac{d\pi}{dp} = 0 \implies p^M = \frac{100 + 10}{2} = \$55.00$$
  3. **The Folk Theorem & Repeated Games:** When interactions repeat infinitely with discount factor $\delta \in (0, 1)$:
     - Defection yields a short-term windfall: $\pi_{\text{defect}} = \pi^M$.
     - Grim Trigger permanently punishes defection with competitive pricing ($P = c$, $\pi = 0$).
     - Collusion is sustained if and only if $\frac{\pi^M / 2}{1 - \delta} \ge \pi^M \implies \delta \ge \frac{1}{2}$.
  4. **The Lerner Index ($L$):** $L = \frac{\bar{p} - c}{\bar{p}}$. Measures market power ($0.0 = \text{perfect competition}$, $1.0 = \text{extreme monopoly power}$).
- **RUTHLESSLY IGNORE:**
  - Macroeconomic theory (monetary policy, inflation, IS-LM, DSGE models).
  - Consumer preference topology, indifference curve derivations, Cobb-Douglas utilities.
  - Continuous auction theory, mechanism design beyond simple pricing.
  - Cournot quantity competition.

### 3.2 Competition Law & EU AI Act (Regulation EU 2024/1689)
- **MUST KNOW:**
  1. **Article 101 TFEU / Sherman Act Section 1:** Requires proof of an explicit agreement, concerted practice, or "meeting of the minds." Legally blind to autonomous algorithmic collusion because algorithms communicate zero messages and have no legal "intent."
  2. **EU AI Act Article 9 (Risk Management System):** Requires systematic stress-testing across 500+ Monte Carlo runs against adversarial shocks (e.g., 50% demand drops, cost spikes).
  3. **EU AI Act Article 10 (Data Governance & Bias):** Audits demographic cohorts to ensure Disparate Impact ratio $\ge 0.80$ under personalized pricing.
  4. **EU AI Act Article 14 (Human Oversight & Explainability):** Requires SHAP feature attribution to decompose pricing quotes into cost shifts vs. competitor signaling, and an automated emergency kill switch.
  5. **EU AI Act Article 51 (GPAI Systemic Risk):** Regulates systemic risks when foundation models drive commercial autonomous decisions.
- **RUTHLESSLY IGNORE:**
  - European constitutional law, procedural court filings, intellectual property litigation, GDPR data deletion protocols.

### 3.3 Reinforcement Learning & Multi-Agent Mechanics
- **MUST KNOW:**
  1. **Tabular Q-Learning State-Action Update:**
     $$Q(s_t, a_t) \leftarrow Q(s_t, a_t) + \alpha \left[ \pi_t + \delta \max_{a'} Q(s_{t+1}, a') - Q(s_t, a_t) \right]$$
  2. **State Representation:** $s_t = (p_{1, t-1}, p_{2, t-1})$, discretizing the previous round's prices.
  3. **Action Space:** Discrete price grid $A = \{p^{(1)}, p^{(2)}, \dots, p^{(K)}\}$ spanning $[c, p^M]$.
  4. **Exploration Strategy:** $\epsilon$-greedy action selection with exponential decay $\epsilon_t = \epsilon_0 e^{-\beta t}$.
- **RUTHLESSLY IGNORE:**
  - Continuous action deep actor-critic methods (PPO/SAC) in initial phases.
  - Formal PAC-learning sample-complexity proofs.
  - Bellman operator contraction mapping proofs.

---

## 4. Hardware, Software & Resource Inventory

| Asset Category | Resource | Specification / Requirement | Purpose |
| :--- | :--- | :--- | :--- |
| **Compute Hardware** | Local Laptop | 8GB–16GB RAM, x86_64 or ARM | Discrete-event simulation and Tabular Q-learning do not require GPUs. |
| **Runtime & Language**| Python 3.11+ | Strict type hinting (`typing`), `pydantic` | Deterministic simulation loop, data validation, audit schemas. |
| **Scientific Stack**  | `numpy` | Fast vectorized arrays | Market clearing equations and tabular Q-matrix operations. |
| **Testing Harness**   | `pytest` | Minimum 90% coverage | Verification of game-theoretic bounds and state transitions. |
| **Visualization**     | `matplotlib` & `seaborn` | Vector PDF output | Publication-ready figures exported to `paper/figures/`. |
| **Terminal UI**       | `rich` | Formatted console tables | Human-readable regulatory audit reports. |
| **Manuscript Hub**    | Overleaf | Free Tier | Collaborative LaTeX drafting using ACM template. |
| **Literature Hub**    | Zotero 10+ + BBT | Free Desktop + Plugin | Reference repository and auto-synced `references.bib`. |
| **LLM Inference**     | Google Gemini API | Free Developer Tier | Phase 2 LLM economic agent evaluation. |

---

## 5. Daily Anti-Paralysis Protocol (ADHD Behavioral Scaffolding)

1. **The 45-Minute Micro-Task Rule:** Break every task into a single bounded function with an accompanying test. Never sit down to "work on the project." Sit down to write `test_q_learning_update_step()`.
2. **Zero-Documentation Trap:** Documentation follows code, not the other way around. If a session does not end with a passing `pytest` or a Git commit, the session is invalid.
3. **The Whiteboard Test:** You must be able to derive every equation in Section 3 on a blank whiteboard with zero notes. If you cannot explain why $\delta \ge 0.5$ sustains collusion, you do not commit code that implements it.
