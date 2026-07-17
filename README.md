<h1 align="center">⌨️ 100 Days of Code</h1>

<p align="center">
  <code>🔧 C++</code>&nbsp;&nbsp;<code>☕ Java</code>&nbsp;&nbsp;<code>📅 Day 21 / 100</code>&nbsp;&nbsp;<code>🔥 21-day streak</code>
</p>

---

## About This Repository

This repository is a structured, self-paced programming challenge spanning **100 consecutive days**. The objective is to build a strong foundation in **Data Structures and Algorithms (DSA)** through consistent, daily problem-solving.

Each day contains exactly **two problems**:

| File | Language | Purpose |
|:---|:---:|:---|
| `Q1.cpp` | C++ | A core DSA concept — implemented from scratch with full I/O, comments, and test cases |
| `Q2.java` | Java | A curated problem from **LeetCode** or **GeeksforGeeks** — focused on pattern recognition and optimal solutions |

This dual-language approach reinforces understanding across both **low-level memory management** (C++) and **object-oriented abstraction** (Java), while covering the same topic from two different angles each day.

---

## Progress

```
 █████████████████████░░░░░░░░░░░░░░░░░░░░░  21 / 100 days
```

**Topics covered so far:** Arrays · Two Pointers · Searching · Merging · Recursion · String Manipulation · 2D Arrays / Matrices · Spiral Traversal · Diagonal Operations · Frequency Counting · Array Rotation · Kadane’s Algorithm · Prefix/Suffix Products · Circular Subarrays · Prefix Sum Hashing · 3Sum · Linked Lists · Fast/Slow Pointers

---

## Daily Problem Log

> Every solution is linked directly — click any filename to view the source code.

<details open>
<summary><h3>Phase 1 — Arrays & Fundamental Operations <code>Day 1–6</code></h3></summary>

Covers the building blocks: insertion, deletion, searching, reversal, merging, and in-place array manipulation using techniques like two-pointer traversal.

| Day | Problem | Technique | Lang | Solution |
|:---:|:---|:---|:---:|:---:|
| **1** | **Q1:** Insert element at a given position in an array | Array shifting | C++ | [Q1.cpp](Day1/Q1.cpp) |
| | **Q2:** Two Sum — find two indices that add up to a target | Hash map lookup | Java | [Q2.java](Day1/Q2.java) |
| **2** | **Q1:** Delete element at a given 1-based position | Array shifting | C++ | [Q1.cpp](Day2/Q1.cpp) |
| | **Q2:** Best Time to Buy and Sell Stock | Single-pass min tracking | Java | [Q2.java](Day2/Q2.java) |
| **3** | **Q1:** Linear Search with comparison count | Sequential scan | C++ | [Q1.cpp](Day3/Q1.cpp) |
| | **Q2:** Missing in Array — find the missing number from 1 to n | Sum formula | Java | [Q2.java](Day3/Q2.java) |
| **4** | **Q1:** Reverse an array in-place | Two pointers | C++ | [Q1.cpp](Day4/Q1.cpp) |
| | **Q2:** Remove Element — remove all occurrences of a value in-place | Two pointers | Java | [Q2.java](Day4/Q2.java) |
| **5** | **Q1:** Merge two sorted arrays into a third | Two-pointer merge | C++ | [Q1.cpp](Day5/Q1.cpp) |
| | **Q2:** Merge Sorted Array — in-place merge from the end (LeetCode 88) | Reverse two-pointer | Java | [Q2.java](Day5/Q2.java) |
| **6** | **Q1:** Remove duplicates from a sorted array in-place | Slow/fast pointer | C++ | [Q1.cpp](Day6/Q1.cpp) |
| | **Q2:** Move Zeroes — push all zeroes to the end (LeetCode 283) | Partition pointer | Java | [Q2.java](Day6/Q2.java) |

</details>

<details open>
<summary><h3>Phase 2 — Recursion & Strings <code>Day 7–10</code></h3></summary>

Introduces recursive thinking with classic problems (Fibonacci, exponentiation), then transitions into string manipulation using iterative and two-pointer techniques.

| Day | Problem | Technique | Lang | Solution |
|:---:|:---|:---|:---:|:---:|
| **7** | **Q1:** Compute the n-th Fibonacci number | Recursive decomposition | C++ | [Q1.cpp](Day7/Q1.cpp) |
| | **Q2:** Fibonacci Number (LeetCode 509) | Recursion | Java | [Q2.java](Day7/Q2.java) |
| **8** | **Q1:** Compute a^b without using built-in power functions | Recursive multiplication | C++ | [Q1.cpp](Day8/Q1.cpp) |
| | **Q2:** Power of Two — check if n is a power of 2 (LeetCode 231) | Recursive halving | Java | [Q2.java](Day8/Q2.java) |
| **9** | **Q1:** Reverse a string character by character | Iterative reversal | C++ | [Q1.cpp](Day9/Q1.cpp) |
| | **Q2:** Reverse String — in-place swap (LeetCode 344) | Two pointers | Java | [Q2.java](Day9/Q2.java) |
| **10** | **Q1:** Check if a string is a palindrome | Two-pointer comparison | C++ | [Q1.cpp](Day10/Q1.cpp) |
| | **Q2:** Intersection of Two Arrays II (LeetCode 350) | Frequency counting | Java | [Q2.java](Day10/Q2.java) |

</details>

<details open>
<summary><h3>Phase 3 — Matrices & 2D Array Operations <code>Day 11–15</code></h3></summary>

Focuses on matrix-level operations: addition, transposition, symmetry checks, spiral traversal, identity verification, and in-place rotation — all requiring nested iteration and boundary management.

| Day | Problem | Technique | Lang | Solution |
|:---:|:---|:---|:---:|:---:|
| **11** | **Q1:** Add two m×n matrices element-wise | Nested iteration | C++ | [Q1.cpp](Day11/Q1.cpp) |
| | **Q2:** Transpose Matrix (LeetCode 867) | Row-column swap | Java | [Q2.java](Day11/Q2.java) |
| **12** | **Q1:** Check if a square matrix is symmetric (A = Aᵀ) | Mirror comparison | C++ | [Q1.cpp](Day12/Q1.cpp) |
| | **Q2:** Toeplitz Matrix — verify constant diagonals (LeetCode 766) | Diagonal check | Java | [Q2.java](Day12/Q2.java) |
| **13** | **Q1:** Spiral matrix traversal — clockwise layer-by-layer | Boundary shrinking | C++ | [Q1.cpp](Day13/Q1.cpp) |
| | **Q2:** Spiral Matrix — return all elements in spiral order (LeetCode 54) | Boundary shrinking | Java | [Q2.java](Day13/Q2.java) |
| **14** | **Q1:** Identity Matrix Check — verify diagonal 1s and off-diagonal 0s | Conditional element check | C++ | [Q1.cpp](Day14/Q1.cpp) |
| | **Q2:** Rotate Image — rotate matrix 90° clockwise in-place (LeetCode 48) | Transpose + row reverse | Java | [Q2.java](Day14/Q2.java) |
| **15** | **Q1:** Primary Diagonal Sum — sum elements where row index equals column index | Diagonal traversal | C++ | [Q1.cpp](Day15/Q1.cpp) |
| | **Q2:** Set Matrix Zeroes — zero entire row/col if element is 0 (LeetCode 73) | Boolean marker arrays | Java | [Q2.java](Day15/Q2.java) |

</details>

<details open>
<summary><h3>Phase 4 — Hashing & Array Techniques <code>Day 16–20</code></h3></summary>

Introduces frequency analysis using visited-marker arrays, advanced array manipulation techniques like triple-reversal rotation, prefix/suffix scans for product-based problems, circular subarray optimization, and sorted two-pointer triplet search.

| Day | Problem | Technique | Lang | Solution |
|:---:|:---|:---|:---:|:---:|
| **16** | **Q1:** Element Frequency Count — count occurrences of each distinct element | Visited-marker array | C++ | [Q1.cpp](Day16/Q1.cpp) |
| | **Q2:** Rotate Array — rotate right by k steps in-place (LeetCode 189) | Triple reversal | Java | [Q2.java](Day16/Q2.java) |
| **17** | **Q1:** Find Maximum and Minimum — single-pass scan of an array | Linear scan | C++ | [Q1.cpp](Day17/Q1.cpp) |
| | **Q2:** Maximum Subarray — largest contiguous sum (LeetCode 53) | Kadane’s algorithm | Java | [Q2.java](Day17/Q2.java) |
| **18** | **Q1:** Rotate Array — rotate right by k positions | Triple reversal | C++ | [Q1.cpp](Day18/Q1.cpp) |
| | **Q2:** Product of Array Except Self (LeetCode 238) | Prefix/suffix products | Java | [Q2.java](Day18/Q2.java) |
| **19** | **Q1:** Pair Sum Closest to Zero — find two elements with minimum absolute sum | Sort + two pointers | C++ | [Q1.cpp](Day19/Q1.cpp) |
| | **Q2:** Maximum Sum Circular Subarray (LeetCode 918) | Kadane max/min + wrap-around | Java | [Q2.java](Day19/Q2.java) |
| **20** | **Q1:** Zero-Sum Subarray Count — count subarrays whose sum is 0 | Prefix sum + hash map frequency | C++ | [Q1.cpp](Day20/Q1.cpp) |
| | **Q2:** 3Sum — find unique triplets that sum to zero (LeetCode 15) | Sort + two pointers + duplicate skipping | Java | [Q2.java](Day20/Q2.java) |

</details>

<details open>
<summary><h3>Phase 5 — Linked Lists <code>Day 21+</code></h3></summary>

Begins pointer-based data structures with singly linked list construction, traversal, and classic fast/slow pointer movement.

| Day | Problem | Technique | Lang | Solution |
|:---:|:---|:---|:---:|:---:|
| **21** | **Q1:** Create and Traverse a Singly Linked List | Tail insertion + pointer traversal | C++ | [Q1.cpp](Day21/Q1.cpp) |
| | **Q2:** Middle of the Linked List (LeetCode 876) | Fast/slow pointers | Java | [Q2.java](Day21/Q2.java) |

</details>

---

## Repository Structure

```
100_Days_Of_Code/
│
├── Day1/
│   ├── Q1.cpp          ← C++ solution with problem statement, examples, and test cases
│   └── Q2.java         ← Java solution for a LeetCode / GFG problem
│
├── Day2/
│   ├── Q1.cpp
│   └── Q2.java
│
├── ...                  ← Day 3 through Day 100 follow the same structure
│
├── .gitignore
└── README.md
```

Each `.cpp` file includes:
- Problem statement as comments
- Input/output format
- Worked examples with explanations
- Multiple test cases

Each `.java` file includes:
- Problem name and source (LeetCode / GFG)
- Clean solution class compatible with online judge submission

---

## How to Run

<details>
<summary><b>⚡ C++ (GCC / G++)</b></summary>

```bash
cd Day14
g++ Q1.cpp -std=c++17 -o Q1
./Q1
```

> All C++ solutions use standard I/O (`cin`/`cout`) and require no external libraries.

</details>

<details>
<summary><b>☕ Java (JDK 8+)</b></summary>

```bash
cd Day14
javac Q2.java
java Solution
```

> Most Java solutions are `Solution` class implementations designed for direct LeetCode submission. Some may require a driver `main` method to run locally.

</details>

---

## Key Concepts by Phase

| Phase | Days | Core Topics |
|:---:|:---:|:---|
| 1 | 1–6 | Array CRUD, two-pointer technique, sorted array operations, in-place manipulation |
| 2 | 7–10 | Recursive problem decomposition, base cases, string traversal and comparison |
| 3 | 11–15 | 2D array traversal, matrix properties, boundary-based algorithms, in-place transforms, diagonal operations |
| 4 | 16–20 | Frequency analysis, visited-marker patterns, in-place rotation techniques, prefix/suffix products, circular subarray optimization, prefix-sum hashing, k-sum patterns |
| 5 | 21+ | Linked list creation, traversal, node references, fast/slow pointer technique |

---

<p align="center">
  <b>Day 21</b> complete · <b>79</b> remaining<br>
  <i>"Consistency is key. Every day is a step closer to mastery."</i>
</p>
