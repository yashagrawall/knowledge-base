
Type : #Research
Date : 2026-10-06  
Tags : [[Research]]  
~ ***Yash Agrawall*** ~

---
# Research Topics and Scopes

---
> [!example] Gas Station Analogy
> Two gas statations (A and B)   
> Each station puts an autonomus software bot in charge of setting the gas price   
> 
> [[#Topic 1]] : The Game : Two bots playing against each other to sell gas. 
> 
> [[#Topic 2]] : The Human Brain : Bots act like real humans instead of mathematical calculators.  
> 
> [[#Topic 3]] : The Police : The Audit software that inspects the bots 
> 
> We wont be working on them simulataneously.

---
## Topic 1

- Gas Station Sandbox and the basic bots. 

How the loop works every single round : 

1. Costs both stations $10 to buy a gallon of gas (Marginal Cost)
2. Monopoly Ceiling : if there was single station, they would charge $50 to maximize profits 
3. Customer Rule : Everyone is unloyal. 
	- 100% of the customer buy from whichever is the cheapest 
	- if both post the exact same price : drivers split 50/50 
4. The Economic Theory v/s AI Reality : 
	- Classical Economics : Both bots should keep reducing prices by 1 cent until gas is $10 (zero profit for both)
	- AI Reality :  The bots learn from each others past and realise that it would be good for both if they both play safe and not agreesively reduce price. 
		- They both start selling at $50 and they know that if either one of them will lower the price, then the other will retaliate and it can start a loss cycle for both of them 
		- This is called **Tacit Collusion** 
		- If they were communicating with each other and fixing prices : **Explicit Collusion** 

### What to build in Topic 1 

1. The Market Loop : A digital refree takes prices from Bot A and Bot B and figures who gets the sales and calculates each bot’s profit. 
2. The Bots : 
	1. Dummy Bot 1 (Undercutter) : Always prices $1 cheaper than the rivals 
	2. Dummy Bot 2 (Tit-for-Tat) : Copies the rival’s yesterday’s price 
	3. Dummy Bot 3 (Q-Learning) 
		- Starts as Jon Snow 
		- Tries different prices, keeps a scoreboard 
		- Learns over time what price is the most profitable (high enough for profit and low enough to attract customers)
3. The Score ($\Delta  \text{ or Collusion Index}$) : A single number from 0 to 1 : 
	- $\Delta = 0.0$ : 0 Profit : Prices stay at $10 (full competition, 0 Collusion) 
	- $\Delta = 1.0$ : Maximum Monopoly Profit (0 agressive competition, Tatic Collusion / Explicit Collusion)

> [!question] The Score ($\Delta$) - wouldn't it come under Topic 3 (The Police)?
> 
> The Collusion Index ($\Delta$) is like internal thermometer of the simulation. 
> - It tells us where the market settled between competitive cost and monopoly pricing. 
> - We need it in Topic 1 to verify weather the Q-learning code works.  
> - In Topic 3, we will go for a comprehensive forensic investigation pipeline that goes far beyond a single price ratio : 
> 	- EU AI Act Article 10 (Fairness Audit) : Checks if the bot practiced discriminatory pricing against protected buyer groups (eg : Basing prices based on demographic data.)
> 	- EU AI Act Article 14 (Explainability / SHAP Attributions) : It mathematically inspects the bot’s decisions to answer : “Did the bot raise prices because of increase in marginal cost or because it detected a collusive signal from its competitor?”
> 	- Automated Compliance Certification : It complies simulation logs into legal JSON/PDF certificates certifying weather the software passes EU regulatory standards. 
>   

### Collusion Index ($\Delta$) 

- It is a single number from $0.00$ to $1.00$ that maps realized market prices onto a normalized percentage bar : 

$$\Delta = \frac{{\overline{p} - p_{Bertrand}}}{p_{Monopoly} - p_{Bertrand}}$$

> [!example] 
> - $p_{Bertrand} = \$10$
> - Marginal Cost = the competitive floor where profit = $0$
> - $p_{Monopoly} = \$50$ (The monopoly ceiling where profit is maximized)
> - $\overline{p}$ = The actual average price that buyers paid across all rounds
>   
>Three Scenarios : 
>1. Full Competition (0 Profit) : $\Delta = \frac{{10 - 10}}{50 - 10} = \frac{0}{40} = 0.00$ → No Collusion 
>2. Full Monopoly (Max Profit) : $\Delta = \frac{{50 - 10}}{50 - 10} = \frac{{40}}{40}=1.00$ → Maximum Collusion
>3. Tacit Collusion (The Danger Zone) : Bots settle on an average price :   
>$\Delta = \frac{42-10}{50-10} = \frac{{32}}{40} = 0.80$ → 80% Collusion

---
## Topic 2 

> [!question] Why do we need to make them act like humans? 
> 
> - Standard Game Theory assume algorithms are cold, emotionless mathematical calculators (Homo Economicus) 
>- IRL, world pricing algorithms deployed by companies are either [[LLM]] → trained on Human Language → Inheriting Human Biases or configured by human managers. 
>- Daniel Kahneman and Amos Tversky proved in Prospect Theory (1979) : 
>	- Humans feel the pain of losing $10, 2.25 times harder than the joy of winning $10 
>	- Loss Aversion $\lambda \approx 2.25$
>	  
>- If an algorithm treats losses and gains symmetrically → it behaves one way 
>- Injecting Human Loss Aversion into the bot’s reward function → losing a customer to an undercutting rival triggers disporportionate “pain”

##### The Research Question : 

> Does human-like loss averison cause pricing bots to become paranoid and retaliate more violently, locking markets into collusive cartels even faster? 

Proving this is the novel academic contribution for ACM FAccT / AAMAS  

### What to build in Topic 2 

1. Frontier LLM Agent (via the Gemini API) to observe how natural language models coordinate prices compared to tabular reinforcement learning. 

---
# Questions

---

> [!question] Why idealistic situations instead of real scenarios (traffic, gas quality, worker friendliness, road - lane bias, etc) ?
> 
> - We must isolate the casual variables. If we introduce 10 confounding variables, you can never prove weather a price increase was caused by algorithmic collusion or by a traffic jam. 
> - When physicists formulated Newton’s Laws of Gravity, they did not drop feathers in a storm. They dropped metal balls in a vacuum tube to eliminate air resistance. 
> - The goal is not to see how different bots act under different situations, its to see if they are colluding with each other or not. The best way to do that is by running them in the same Sandbox environment. 
>
>- EU Sandbox Principle : EU AI Act (Articles 53-54) explicitly mandates Regulatory Sandboxes. 
>	- Regulators take the company’s pricing model, place it inside a standardized synthetic test harness (our simulation), run 1000 controlled pricing rounds, and measure how it responds under, pure, clean conditions. 

