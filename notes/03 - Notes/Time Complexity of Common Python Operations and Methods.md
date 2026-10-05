
Type : #Note    
Date : 2026-09-27    
Tags : [[DSA]]   
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Time Complexity of Common Python Operations and Methods 

---
## List 

- For DSA in python : [[Array]] mean List

| **Operation**    | **Code**                     | **Average Case**    | **[Amortized Worst Case](http://en.wikipedia.org/wiki/Amortized_analysis)** | __notes__                                                                                                                                                     |
| ---------------- | ---------------------------- | ------------------- | --------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Copy             | `l.copy()` or `l[:]`         | $O(n)$              | $$O(n)$$                                                                    | Must touch and duplicate every single element into a brand new list.                                                                                          |
| Append           | `l.append(x)`                | $O(1)$              | $$O(1)$$                                                                    | Puts the item in the next empty chair at the end. <br>*(Amortized: Python reserves extra empty chairs in advance so it rarely needs to allocate more space).* |
| Pop last         | `l.pop()`                    | $O(1)$              | $$O(1)$$                                                                    | Takes the last item away and updates the counter. No other items need to move.                                                                                |
| Pop intermediate | `l.pop(i)`                   | $O(n)$              | $$O(n)$$                                                                    | Removing someone from the front leaves an empty seat. **Every item behind it must shift one step to the left.**                                               |
| Insert           | `l.insert(i, x)`             | $O(n)$              | $$O(n)$$                                                                    | To squeeze someone into seat `i`, every element from `i` to the end has to shift one step to the right to make room.                                          |
| Get Item         | `l[i]`                       | $O(1)$              | $$O(1)$$                                                                    | You give the exact index. Python calculates the memory address instantly and grabs it.                                                                        |
| Set Item         | `l[i] = val`                 | $O(1)$              | $$O(1)$$                                                                    | Direct jump to that chair and swap the item sitting there.                                                                                                    |
| Delete Item      | `del l[i]`                   | $O(n)$              | $$O(n)$$                                                                    | Same as `pop(i)`: leaves a hole, so all trailing elements must slide left.                                                                                    |
| Iteration        |                              | $O(n)$              | $$O(n)$$                                                                    | Touches every element.                                                                                                                                        |
| Get Slice        | `l[a:b]`                     | $O(k)$              | $$O(k)$$                                                                    | Copies $k$ elements (where $k = b - a$) into a fresh list.                                                                                                    |
| Del Slice        | `del l[a:b]`                 | $O(n)$              | $$O(n)$$                                                                    | Removes $k$ items and shifts all remaining trailing elements left to close the gap.                                                                           |
| Set Slice        | `l[a:b] = other`             | $O(k+n)$            | $$O(k+n)$$                                                                  | Shifts existing elements to fit the difference in length, then copies $k$ new items in.                                                                       |
| Extend           | `l.extend(other)`            | $O(k)$              | $$O(k)$$                                                                    | Adds $k$ items from `other` to the end. Amortized $O(k)$ where $k = \text{len}(other)$.                                                                       |
| Sort             | `l.sort()`                   | $O(\text{n log n})$ | $$O(\text{n log n})$$                                                       | Uses **Timsort** (an optimized hybrid of Merge Sort & Insertion Sort). Best case is $O(n)$ if already sorted.                                                 |
| Multiply         | `l * k`                      | $O(nk)$             | $$O(nk)$$                                                                   | Duplicates the list $k$ times to create a new list of length $n \times k$.                                                                                    |
| x in l           | `x in l`                     | $O(n)$              | $$O(n)$$                                                                    | Blind search. Python starts at index 0 and checks each item one by one until it finds a match or hits the end.                                                |
| min(l), max(l)   | `min(l)`, `max(l)`           | $O(n)$              | $$O(n)$$                                                                    | Must inspect every single element at least once to be sure which is smallest/largest.                                                                         |
| Get Length       | `len(l)`                     | $O(1)$              | $$O(1)$$                                                                    | Python doesn't count items when you call `len()`. It keeps a running tally counter in memory and just reads it.                                               |
| Reverse          | `l.reverse()` or `l = [:-1]` | $O(n)$              | $$O(n)$$                                                                    | Swaps pairs from outside-in until the whole list is flipped. Touches all $n$ items.                                                                           |

---
## Sets

| **Operation** | **Code** | **Average Case** | **Worst Case** | **notes** |
| :--- | :--- | :--- | :--- | :--- |
| **x in s** | `x in s` | $O(1)$ | $O(n)$ | Python hashes `x` and jumps straight to its pigeonhole. Instant lookup. *(Worst case $O(n)$ only if all items collide into the exact same slot).* |
| **Add** | `s.add(x)` | $O(1)$ | $O(n)$ | Hashes `x` and drops it into its pigeonhole. |
| **Remove** | `s.remove(x)` | $O(1)$ | $O(n)$ | Hashes `x`, finds the slot, and empties it. (Raises `KeyError` if item is missing). |
| **Discard** | `s.discard(x)` | $O(1)$ | $O(n)$ | Same as remove, but stays quiet if the item isn't in the set. |
| **Pop** | `s.pop()` | $O(1)$ | $O(1)$ | Grabs whatever item happens to be in the first non-empty slot. (Arbitrary order). |
| **Union s \| t** | `s \| t` | $O(\text{len}(s) + \text{len}(t))$ | $O(\text{len}(s) + \text{len}(t))$ | Touches every item in both sets to combine them into a brand new set. |
| **Intersection s & t** | `s & t` | $O(\min(\text{len}(s), \text{len}(t)))$ | $O(\text{len}(s) \times \text{len}(t))$ | **Smart shortcut:** Python loops through the **smaller** set and checks if each item exists in the bigger set ($O(1)$ checks). |
| **Multiple intersection** | `s1 & s2 & .. & sn` | $(n - 1) \times O(l)$ | $(n - 1) \times O(l)$ | Where $l = \max(\text{len}(s_i))$. Intersects sets one by one from left to right. |
| **Difference s - t** | `s - t` | $O(\text{len}(s))$ | $O(\text{len}(s) \times \text{len}(t))$ | Loops through all items in `s` and creates a new set without items found in `t`. |
| **s.difference_update(t)** | `s.difference_update(t)` | $O(\text{len}(t))$ | $O(\text{len}(t) \times \text{len}(s))$ | **In-place:** Loops through items in `t` and deletes them from `s`. Super fast if `t` has only a few items and `s` is huge! |
| **Symmetric Difference s ^ t** | `s ^ t` | $O(\text{len}(s) + \text{len}(t))$ | $O(\text{len}(s) \times \text{len}(t))$ | Creates a new set containing items that are in `s` or `t`, but not in both. |
| **s.symmetric_difference_update(t)** | `s.symmetric_difference_update(t)` | $O(\text{len}(t))$ | $O(\text{len}(t) \times \text{len}(s))$ | **In-place:** Loops through `t`: if item is in `s`, removes it; if not, adds it. |

---
## Dict (`dict`)

| **Operation** | **Code** | **Average Case** | **[Amortized Worst Case](http://en.wikipedia.org/wiki/Amortized_analysis)** | **notes** |
| :--- | :--- | :--- | :--- | :--- |
| **Get Item** | `d[k]` or `d.get(k)` | $O(1)$ | $O(n)$ | Hashes key `k`, jumps straight to its pigeonhole, and reads the value. |
| **Set Item** | `d[k] = val` | $O(1)$ | $O(n)$ | Hashes key `k` and places/overwrites value in that slot. |
| **Delete Item** | `del d[k]` or `d.pop(k)` | $O(1)$ | $O(n)$ | Finds key's pigeonhole and clears it. No other items need to shift. |
| **k in d** | `k in d` | $O(1)$ | $O(n)$ | Checks if key's pigeonhole is occupied. Instant check, never scans the dict. |
| **Copy** | `d.copy()` | $O(n)$ | $O(n)$ | Copies all key-value pairs into a new dictionary. |
| **Iteration** | `for k in d:` | $O(n)$ | $O(n)$ | Visits every key-value pair once in insertion order. |
| **Keys / Values View** | `d.keys()`, `d.values()` | $O(1)$ | $O(1)$ | Doesn't copy anything! Gives a live viewing window into the dictionary. |
| **Get Length** | `len(d)` | $O(1)$ | $O(1)$ | Python stores the item count in the dict header; reading it is instant. |

---
## Deque (`collections.deque`)

- Whenever you need a **Queue (FIFO)**, `list.pop(0)` is a trap because shifting seats takes $O(n)$. Use `collections.deque` instead.

| **Operation** | **Code** | **Average Case** | **Worst Case** | **notes** |
| :--- | :--- | :--- | :--- | :--- |
| **Append right** | `d.append(x)` | $O(1)$ | $O(1)$ | Puts item at the right end. |
| **Append left** | `d.appendleft(x)` | $O(1)$ | $O(1)$ | Attaches item at the left end without moving anyone else! |
| **Pop right** | `d.pop()` | $O(1)$ | $O(1)$ | Takes item off the right end. |
| **Pop left** | `d.popleft()` | $O(1)$ | $O(1)$ | Takes item off the left end instantly! (Unlike `list.pop(0)` which is $O(n)$). |
| **Index Access** | `d[i]` | $O(n)$ | $O(n)$ | Must walk down the chain of blocks to find the $i$-th seat. *(Never use deque for random access `d[i]`)*. |

---
## Strings (`str`)

- Strings are **immutable** (carved in stone). Any modification makes a new copy.

| **Operation** | **Code** | **Time Complexity** | **notes** |
| :--- | :--- | :--- | :--- |
| **Get Character** | `s[i]` | $O(1)$ | Direct jump to that character position in memory. |
| **Get Length** | `len(s)` | $O(1)$ | Directly reads stored length counter. |
| **Slice** | `s[a:b]` | $O(k)$ | Copies $k = b - a$ characters into a brand new string. |
| **Concatenation** | `s + t` | $O(n + m)$ | Allocates a new string of size $n + m$ and copies both strings in. |
| **Join** | `''.join(list)` | $O(\text{total chars})$ | Measures total length first, allocates memory once, and copies all strings in one pass. |

---
# The 3 Deadly DSA / Interview Traps

---
## ❌ TRAP 1: $O(n^2)$ because "$x$ in list" scans the whole list each time

```python
for x in list_a:
    if x in list_b:       # O(m) scan
```

### ✅ FIX: $O(n + m)$ - Set lookup is instant $O(1)$

```python
set_b = set(list_b)
for x in list_a:
    if x in set_b:       # O(1) lookup
```

---
## ❌ TRAP 2: $O(n^2)$ BFS Queue because `pop(0)` shifts all remaining elements

```python
while queue:
    item = queue.pop(0)  # O(n) each time!
```

### ✅ FIX: $O(n)$ using deque

```python
from collections import deque
q = deque(queue)
while q:
    item = q.popleft()   # O(1) instant!
```

---
## ❌ TRAP 3: $O(n^2)$ String building inside a loop

```python
s = ""
for ch in words:
    s += ch              # re-copies entire string every time!
```

### ✅ FIX: $O(n)$ using join

```python
s = "".join(words)       # single allocation
```

---
# Questions 






---
# References 

1. [[Time Complexity]]
2. [YouTube Python DSA Series Lecture](https://youtu.be/PLV0f4RAMvI?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)
3. [Python Time Complexity Table](https://wiki.python.org/moin/TimeComplexity)