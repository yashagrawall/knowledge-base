
Type : #Note    
Date : 2026-09-01    
Tags :  [[Research]]     
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# All about Research 

---
## Core Idea 

- High School : small layer in the center 
- Bachelor’s : expands towards the edge in one specific slice
- Master’s / deep specialization : boundary of what humanity knows  
- Research : pushing against that boundary until a tiny bump forms → new knowledge created by you  → discovering, inventing or proving something that nobody knew before 
- Report : summarizing what others have done 

---
## Key Players & their roles

1. Researcher / Principal Investigators (PIs) : Professors, scientists, or lab directors who lead research groups
2. Graduate Students & Postdocs : PhD/Master’s Student and post-doctoral fellows who do the bulk of the day to day experiments, coding and writing 
3. Research Institutions :
	1. Academic Institutions : MIT, Oxford, IITs, etc 
	2. Industry Research Labs : Google DeepMind, Microsoft Research , CERN, Bell Labs 
4. Funding Agencies : give financial grants to fund equipment, compute and salaries 
	1. Govt : NSF, NIH, EU Horizon, etc 
	2. Private Corporations 

---
## Where Research Lives 

- Research Paper : formal report (usually 4 to 15 pages) describing a problem, what the researched did, what they found and why it matters 
- Preprints : Public open repositories where researchers post their drafts immediately so others cna read and build on them before peer review  
	- Eg : [arXiv](www.arXiv.org) , bioRxiv 
- Conferences : Annual gatherings where researchers submit papers 
	- accepted papers are published in “Proceedings” and presented as talks / posters 
	- Common in CS / AI 
	- Eg : NeuroIPS , CVPR , ICML 
- Journals : published peer-reviewed papers  
	- Common in Medicine, Physics, Biology  
	- Eg : Nature , Science , IEEE , Transactions  

--- 
## Peer-Review Process 

![[Pasted image 20260901193451.png]]

- this is how bad or fake work is filtered out 

> [!note] 
> What researchers check : 
> - Is the problem meaningful? 
> - Is the methodology sound? 
> - Are the results novel and reproducible? 
> - Did the authors cite the right prior work? 

---
## Lifecycle of a Research Project 

Every Research project moves through 6 distinct phases : 
[[#1. Find a Problem]]  
[[#2. Literature Review]]  
[[#3. Formulate Idea]]  
[[#4. Experiment / Build]]  
[[#5. Analyze]]  
[[#6. Write & Publish]]  

---
### 1. Find a Problem

- Good Research starts with a good Question  
- Look for gap in knowledge  : 
	- “Everyone solves X using method Y, but Y fails in scenario Z. Can we fix it?”
	- “Does drug A have an adverse reaction when combined with drug B?” 
	- “Can we make this AI model 10x faster with only a 1% drop in accuracy?”

---
### 2. Literature Review  

- Before building anything, you must read what other people have already tried so you don't reinvent the wheel  
- Collect 15-50 relevant papers, read their approaches and see where there limitations lie  

---
### 3. Formulate Idea

- State your proposed solution and your hypothesis  

> [!hypothesis]
> _“If we add an attention mechanism to this architecture, training time will decrease by 20% on long documents”_

---
### 4. Experiment / Build 

- In CSE : Write code, run experiments, test against existing SOTA methods (baselines) and test variations (ablation studies)
- In Science : Run lab test, collect field data, build physical prototypes or write mathematical proofs.  

--- 
### 5. Analyze  

You Evaluate the results honestly : 
- Did the hypothesis hold? 
- What were the failure cases? 
- are the results statistically signifant or just a fluke? 

---
### 6. Write & Publish 

- Write the manuscript, create clean diagrams and charts, reference all prior work and submit it for peer review 

---
## Anatomy of a Research Paper 


| Section                       | Question It Answers          | What It Contains                                                                                                        | Description                                                                                                               |
| ----------------------------- | ---------------------------- | ----------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------- |
| **Title & Abstract**          | _What is this in 200 words?_ | A concise summary of the problem, proposed solution, key result, and conclusion.                                        | 150 words: problem, method, result. Written last, read first.                                                             |
| **Introduction**              | _Why should I care?_         | Real-world motivation, the core challenge, a high-level summary of your idea, and a bulleted list of **contributions**. | the gap, why it matters, your contribution in 3 bullet-style claims.                                                      |
| **Related Work**              | _What did others do before?_ | Survey of existing literature and how your work differs from theirs.                                                    | proof you know what already exists and how you differ.                                                                    |
| **Method / Approach**         | _How exactly did you do it?_ | The mathematical formulation, system architecture, or algorithm step-by-step (detailed enough to be reproducible).      | your actual technical contribution. Equations, architecture diagrams, algorithms.                                         |
| **Experiments & Results**     | _Did it actually work?_      | Benchmarks, baseline comparisons, graphs, tables, and ablation studies.                                                 | datasets used, baselines compared against, metrics, ablations (removing parts of your method to prove each part matters). |
| **Discussion & Limitations**  | _Where does this fail?_      | Honest assessment of edge cases, computational costs, and ethical considerations.                                       | tables/graphs showing you beat baselines. honest about what doesn't work.                                                 |
| **Conclusion & Future Work**  | _What is the takeaway?_      | Final wrap-up and suggestions for what researchers should explore next.                                                 | What you shall do next, or other researchers do in order to continue the research.                                        |
| **References / Bibliography** | _Whose work was cited?_      | Formal citation list of all referenced materials.                                                                       | everything you cited.                                                                                                     |

---
## [[How to Read a Paper]]

- Never read like a novel from page 1 to the end 
- use the 3-Pass method 

> [!tip] 
> Don’t panic if you don’t understand everything.   
> Even senior researchers encounter math symbols or domain jargon they have to look up.   
> It is completely normal to understand only 30% of a paper on your first attempt. 

---
## Essential Tools of the Trade  

1. Finding Papers : 
	- [Google Scholar](https://scholar.google.com/) : Search engine for academic literature 
	- [Semantic Scholar](https://www.semanticscholar.org/) : AI powered paper search that extracts key takeaways and citations 
	- [Connected Papers](https://www.connectedpapers.com/) : Visual graph tool to see which paper influenced each other 
	- [arXiv](https://arxiv.org/) : Open repository for cutting edge preprints (espacially in AI, Maths and Physics) 

2. Managing References : 
	- [Zotero](https://www.zotero.org/) : Free, open source tool to save PDFs, organize citations, and take notes. 

3. Writing Papers : 
	- [OverLeaf](https://www.overleaf.com/) : Collaborative online LaTex editor (the standard typesetting system for reseach papers)

---
## Actionable Roadmap 

If you have never done research, follow these 4 steps : 

### 1. Pick one sub-topic you are passionate about 

- pick a niche, narrow down instead of a broad topic like AI or Biotechnology 

### 2. Read 2-3 “Survey” or “Review” Papers 

- Search for : `"[Your Topic] survey paper"` or `[Your Topic] literature review`
- Survey papers do not present new experiments; instead, an expert surveys 100+ papers in the field and explains the current state of the art in plain terms. This is the ultimate shortcut for beginners.

### 3. Reproduce an Existing Paper 

- The best way to learn reseach is replication : 
	- Find a paper that has published open source code or open datasets (eg : [Papers With Code](https://huggingface.co/papers/trending))
	- Download the code, get it running on your machine, replicate their results and inspect the code. 

### 4. Ask “What If?” (Make a Small Tweak)

- Once replicated, make a modification : 
	- What happens if you change a parameter? 
	- What happens if you test it on a different dataset? 
	- What happens if you simplify one of the components? 
- This experimentation is your very first step into doing original research. 



