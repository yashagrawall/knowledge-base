
Type : #RawNote       
Date : 2026-09-27        
Tags :  [[08 - Tags/cloud computing]] ; [[College]]     
~ ***Yash Agrawall*** ~     

---
# Cloud Computing (CC) — Study Flow & Execution Guide

**Course Code:** OECS6331 | **Credits:** 3 (Theory) = **3 Credits**  
**Associated Notes:** [[CC Theory Syllabus]] · [[Core_Subjects_Study_Method_and_Visual_Sources]]

---
## 1. Executive Strategy & The Dual Lens

Cloud Computing covers the infrastructure abstractions running modern software:

1. **The College Exam Lens:** BPUT and faculty evaluations (Sibani Ma'am / SKN) test standard taxonomy definitions: the NIST Cloud Computing Reference Architecture, the SPI Model (SaaS, PaaS, IaaS), Public vs. Private vs. Hybrid cloud trade-offs, Google App Engine runtimes, and Salesforce Force.com multi-tenant database layers.
2. **The Obsolescence Warning:** Many legacy cloud textbooks (2010–2012 era) are filled with outdated UI screenshots. **Skip the outdated tool interfaces.** Focus on the modern academic text by [[Cloud_Computing-Sandeep_Bhowmik-1st_ed.pdf]] 

---

## 2. Resource Mapping & Local Assets

| Resource Type | Source Name | Local Path / URL | Role & Switch Trigger |
| :--- | :--- | :--- | :--- |
| **Primary Academic Syllabus Text** | **Sandeep Bhowmik** (1st Ed, Cambridge) | [[Cloud_Computing-Sandeep_Bhowmik-1st_ed.pdf]] | **Modern & Clean.** Excellent coverage of virtualization, IaaS/PaaS/SaaS architectures, and cloud security compliance. Offset: $\text{PP} = \text{BP} + 26$. |
| **Distributed Systems Bible** | **Martin Kleppmann (DDIA)** (2nd Ed) | [[Designing_Data:_Intentive_Applications-Martin_Kleppmann-2nd_ed.pdf]] | **Read for Systems Depth.** Reference for distributed consensus, replication, partitioning, and transaction guarantees. |
| **Faculty Study Archive** | **Sibani Ma'am Lecture Notes** | [[06 - Archive/IGIT Sarang CSE 5th Sem/CC/Study Materials by Sibani Ma'am/|Sibani Ma'am Notes Archive in Vault]] | Review for exam-specific definitions, module summaries, and internal question patterns. |
| **Architectural Visual Lectures** | **ByteByteGo (Alex Xu)** | [ByteByteGo YouTube Channel](https://www.youtube.com/@ByteByteGo) | Animated architectural diagrams for virtualization, S3 storage, load balancers, and message queues. |
| **Exam Concepts & Taxonomies** | **Gate Smashers** | [Gate Smashers Cloud Computing Playlist](https://www.youtube.com/playlist?list=PLxCzCOWd7aiGzY1kS_5uvbp7p_q8A5f_u) | Crisp summaries of the NIST model, hypervisors, and service delivery layers. |
| **Interactive Tool** | **Raft Visualizer** | [The Secret Lives of Data (Raft Consensus)](https://thesecretlivesofdata.com/raft/) | Visual step-through of how distributed nodes achieve consensus during leader election and log replication. |

---

## 3. Master Chronological Study Flow & Exact Page Mapping

### PHASE 1: Evolution of Computing, NIST Cloud Model & Virtualization (Module I)

```
[Start Here] Bhowmik Ch 1 (BP 1-22 | PP 27-48)
       │ (Mainframe -> Cluster -> Grid -> Utility -> Cloud Computing Evolution)
       ▼ 
[Shift To] Bhowmik Ch 2 (BP 23-45 | PP 49-71)
       │ (NIST Definition: 5 Characteristics, 3 Service Models SPI, 4 Deployment Models)
       ▼
[Finish With] Bhowmik Ch 3 (BP 47-83 | PP 73-109)
         (Virtualization: Type 1 vs Type 2 Hypervisors, Full/Para-Virtualization, Containers)
```

* **Step 1: Evolution of Computing Paradigms**
  * *Resource:* Bhowmik Ch 1.1–1.6 (BP 1–22 | **PP 27–48**)
  * *Subtopics:* Mainframe computing, Cluster computing, Grid computing (Globus, resource sharing), Utility computing (pay-as-you-go economic model), Autonomic computing (self-configuration, self-healing, self-optimization, self-protection), Emergence of Cloud Computing.
* **Step 2: NIST Cloud Architecture & Taxonomies**
  * *Resource:* Bhowmik Ch 2.1–2.7 (BP 23–45 | **PP 49–71**)
  * *Subtopics:* NIST formal cloud definition; 5 Essential Characteristics: On-demand self-service, Broad network access, Resource pooling (multi-tenancy), Rapid elasticity, Measured service; 3 Service Models: Software as a Service (SaaS), Platform as a Service (PaaS), Infrastructure as a Service (IaaS); 4 Deployment Models: Public, Private, Hybrid, Community Cloud.
* **Step 3: Virtualization Primitives & Hypervisors**
  * *Resource:* Bhowmik Ch 3.1–3.8 (BP 47–83 | **PP 73–109**)
  * *Subtopics:* Virtualization concept and benefits, Hypervisors / Virtual Machine Monitors (VMM):
    * Type-1 (Bare-Metal): VMware ESXi, Citrix Xen, KVM (direct hardware access, high performance).
    * Type-2 (Hosted): VMware Workstation, Oracle VirtualBox (runs on host OS, development/testing).
  * *Techniques:* Full Virtualization (binary translation), Para-Virtualization (hypercalls, modified guest kernel), Hardware-Assisted Virtualization (Intel VT-x, AMD-V), OS-Level Virtualization (Containers: Linux `cgroups` and `namespaces`, Docker).
* **Skip List for Phase 1:**
  * Skip complex historical grid computing middleware setups (Globus Toolkit 4 configuration).
  * Skip low-level CPU ring switching assembly opcode mechanics in Bhowmik Sec 3.4.
* **The Dual Asset:**
  * **Systems Invariant:** The abstraction boundary: Hypervisors virtualize hardware resources with CPU instruction trap-and-emulate overhead; Containers share the host Linux kernel to deliver sub-second spin-up and near-bare-metal compute efficiency.
  * **Exam Representation:** Standard NIST Cloud Computing Reference Architecture diagram and the 3-column comparative table between **IaaS vs. PaaS vs. SaaS** (Control, Responsibility, Provider Examples).

---

### PHASE 2: Cloud Deployment & Infrastructure as a Service (IaaS) (Module II)

```
[Start Here] Bhowmik Ch 4 (BP 85-108 | PP 111-134)
       │ (Cloud Service Models, IaaS Principles & Resource Provisioning Lifecycle)
       ▼ 
[Shift To] Bhowmik Ch 5 (BP 109-134 | PP 135-160)
       │ (Amazon Web Services AWS Deep Dive: EC2, S3, SQS & Eucalyptus Architecture)
       ▼
[Finish With] Bhowmik Ch 5.5-5.8 (BP 125-134 | PP 151-160)
         (VMware vCloud Private Cloud, Resource Pools & Virtual Data Centers)
```

* **Step 1: Deployment Models Analysis & Trade-offs**
  * *Resource:* Bhowmik Ch 2.5 (BP 34–42 | **PP 60–68**) & Ch 4.1–4.3 (BP 85–98 | **PP 111–124**)
  * *Subtopics:* Public Cloud (multi-tenant economies of scale, noisy neighbors), Private Cloud (single-tenant dedicated compliance, capital expenditure CapEx vs operational OpEx), Hybrid Cloud (cloud bursting, data sovereignty), Community Cloud (shared regulatory mission).
* **Step 2: Amazon Web Services (AWS) Core Architecture**
  * *Resource:* Bhowmik Ch 5.1–5.4 (BP 109–124 | **PP 135–150**)
  * *Subtopics:*
    * Compute: Amazon Elastic Compute Cloud (EC2) — Instance families, Amazon Machine Images (AMI), virtualization backend (Xen $\to$ Nitro).
    * Storage: Amazon Simple Storage Service (S3) — Buckets, objects, immutable data, 99.999999999% ($11\times 9$) durability, storage tiering (Standard, Infrequent Access, Glacier).
    * Messaging: Amazon Simple Queue Service (SQS) — Distributed queueing, Standard vs FIFO queues, visibility timeout, short vs long polling.
* **Step 3: Private Cloud & VMware vCloud Architecture**
  * *Resource:* Bhowmik Ch 5.5–5.8 (BP 125–134 | **PP 151–160**)
  * *Subtopics:* VMware vCloud Suite: vCloud Director, ESXi cluster management, Virtual Data Centers (vDC), Resource Pools, Open-source IaaS alternatives (Eucalyptus, OpenStack architecture).
* **Skip List for Phase 2:**
  * Skip deprecated AWS management console UI walkthroughs.
  * Skip legacy VMware vCloud Express setup wizards.
* **The Dual Asset:**
  * **Systems Invariant:** Decoupled distributed queues (SQS) eliminate producer-consumer lock contention and absorb traffic spikes; object storage immutability enables horizontal replication without distributed locks.
  * **Exam Representation:** Comparative matrix: Public vs. Private vs. Hybrid Cloud (Security, Cost, Elasticity, Scalability) and the AWS Core Architecture Block Diagram (EC2, S3, SQS, VPC).

---

### PHASE 3: PaaS, SaaS & Enterprise Cloud Platforms (Module III)

```
[Start Here] Bhowmik Ch 6 (BP 135-158 | PP 161-184)
       │ (Platform as a Service PaaS: Google App Engine GAE Architecture & Datastore)
       ▼ 
[Shift To] Bhowmik Ch 7 (BP 159-182 | PP 185-208)
       │ (Microsoft Azure Platform: Web/Worker Roles, Azure Storage & SQL Azure)
       ▼
[Finish With] Bhowmik Ch 8 (BP 183-216 | PP 209-242)
         (Software as a Service SaaS: Multi-Tenancy Architecture & Salesforce Force.com)
```

* **Step 1: Google App Engine (GAE) Architecture**
  * *Resource:* Bhowmik Ch 6.1–6.6 (BP 135–158 | **PP 161–184**)
  * *Subtopics:* PaaS architecture and programming abstractions; GAE component model: Request handlers, Sandbox execution environment (restrictions on threads, sockets, filesystem), Runtimes (Python, Java), Google Cloud Datastore (NoSQL entity-property model, Megastore/Bigtable storage layer, GQL querying).
* **Step 2: Windows Azure Platform (Microsoft Azure)**
  * *Resource:* Bhowmik Ch 7.1–7.6 (BP 159–182 | **PP 185–208**)
  * *Subtopics:* Azure architecture; Compute Services: Web Role (IIS frontends), Worker Role (background queue processing), VM Role; Storage Services: Blobs (unstructured files), Tables (NoSQL key-value), Queues (inter-role messaging); SQL Azure (relational DBaaS), Azure Fabric Controller (resource lifecycle management).
* **Step 3: Software as a Service (SaaS) & Multi-Tenant Databases**
  * *Resource:* Bhowmik Ch 8.1–8.7 (BP 183–216 | **PP 209–242**)
  * *Subtopics:* SaaS delivery model, Multi-tenancy patterns:
    1. Separate Database (highest isolation, highest cost).
    2. Shared Database, Separate Schema (medium isolation).
    3. Shared Database, Shared Schema (lowest cost, requires strict tenant ID filtering).
  * *Salesforce Force.com:* Virtual Metadata Architecture (UDD / Universal Data Dictionary), Custom Objects, Apex programming language, Visualforce UI framework; Enterprise suites: Google Workspace, Microsoft Office 365.
* **Skip List for Phase 3:**
  * Skip deprecated Azure SDK 1.x command-line installation steps.
  * Skip obsolete Salesforce UI configuration screenshots.
* **The Dual Asset:**
  * **Systems Invariant:** The Multi-Tenant Metadata Architecture: Mapping dynamic tenant schemas into uniform physical database tables with metadata indexing, preventing schema migration locks across millions of organizations.
  * **Exam Representation:** Google App Engine architecture diagram showing Request Handler $\to$ Sandbox $\to$ Datastore, and the 3 Multi-Tenant Database Architecture patterns diagram.

---

### PHASE 4: Cloud Security, Privacy, Governance & Auditing (Module IV)

```
[Start Here] Bhowmik Ch 11 (BP 277-314 | PP 303-340)
       │ (Cloud Security Threats, Multi-Tenancy Risks, Data Encryption & IAM)
       ▼ 
[Shift To] Bhowmik Ch 12 (BP 315-342 | PP 341-368)
       │ (Cloud Compliance, SLA Auditing, Governance & Disaster Recovery)
       ▼
[Finish With] DDIA (Kleppmann) Ch 5 & Ch 6 (PP 151-220)
         (Distributed Systems Depth: Leader-Follower Replication & Partitioning)
```

* **Step 1: Cloud Security & Privacy**
  * *Resource:* Bhowmik Ch 11.1–11.8 (BP 277–314 | **PP 303–340**)
  * *Subtopics:* Cloud security threat taxonomy (data breaches, data loss, account hijacking, insecure APIs, denial of service, malicious insiders), Multi-tenancy risks (side-channel attacks, hypervisor escape), Data security: Encryption at rest (AES-256) and in transit (TLS), Identity and Access Management (IAM: RBAC, ABAC, principle of least privilege), Key Management Services (KMS).
* **Step 2: Cloud Governance, Auditing & SLAs**
  * *Resource:* Bhowmik Ch 12.1–12.7 (BP 315–342 | **PP 341–368**)
  * *Subtopics:* Service Level Agreements (SLAs: availability nines, penalties, MTBF, MTTR), Cloud auditing and logging (CloudTrail, audit trails), Compliance frameworks (ISO 27001, SOC 2, HIPAA, EU GDPR data sovereignty principles, EU AI Act compliance parallels), Cloud disaster recovery (RPO vs RTO, backup strategies, multi-region failover).
* **Step 3: Distributed Systems Deep Dive (for Research & Graduate Depth)**
  * *Resource:* Martin Kleppmann (DDIA) Ch 5 & Ch 6 (**PP 151–220**)
  * *Subtopics:* Leader-follower replication, synchronicity trade-offs, split-brain scenarios, partitioning/sharding strategies.
* **Skip List for Phase 4:**
  * Skip legalistic boilerplate text of US HIPAA regulatory statutes.
  * Skip proprietary vendor audit checklist worksheets.
* **The Dual Asset:**
  * **Systems Invariant:** The Shared Responsibility Model: Cloud provider secures the infrastructure *of* the cloud (physical servers, virtualization kernel, facilities); the customer secures everything *in* the cloud (IAM policies, encryption keys, application code, data).
  * **Exam Representation:** The Cloud Security Shared Responsibility matrix across IaaS, PaaS, and SaaS, and the mathematical formula for Availability ($A = \frac{\text{MTBF}}{\text{MTBF} + \text{MTTR}}$).

---

## 4. Tactical Execution Protocol (Per 60-Min Study Session)

1. **Step 1: Visual Seed (20 Mins):** Watch the targeted Gate Smashers video or ByteByteGo architecture breakdown.
2. **Step 2: Targeted Book Extraction (30 Mins):** Jump directly to the exact PDF page of Sandeep Bhowmik listed above.
3. **Step 3: Dual Asset Note (10 Mins):** Open [[Academic Notes Template]] and record:
   - Invariant (cloud abstraction / multi-tenant isolation / shared responsibility).
   - Exam Representation (NIST model / AWS block diagram / comparative table).
4. **Hard Stop (60 Mins Total):** Close book and move on.

---
# References 

1. [[1Virtualization.pptx]]
2. [[AWS.pptx]]
3. [[CUnit1 (1).pdf]]
4. [[Cunit2 (1).pdf]]
5. [[Cloud_Computing-Sandeep_Bhowmik-1st_ed.pdf]]