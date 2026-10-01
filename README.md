\# HackerRank 3rd Sem Algorithm Portfolio



\## Student Details



\- \*\*Name:\*\* Prarthana H S

\- \*\*USN / Student ID:\*\* R25EF194

\- \*\*Program:\*\* B.Tech Computer Science and Engineering

\- \*\*Semester:\*\* 3rd Semester

\- \*\*University:\*\* REVA University, Bengaluru

\- \*\*HackerRank Profile:\*\* https://www.hackerrank.com/profile/Prarthana\_HS

\- \*\*GitHub Profile:\*\* https://github.com/prarthana08prarthu



\---



\## About This Portfolio



This repository contains my solutions and algorithm analysis for five mandatory problems completed as part of the 3rd Semester Algorithms and GitHub Coding Portfolio activity.



The solutions are implemented in \*\*C++\*\* and focus on understanding algorithmic approaches, time complexity, auxiliary space complexity, and practical implementation.



\---



\## Problems Completed



\### 1. Mini-Max Sum



\*\*Problem:\*\* Given five positive integers, calculate the minimum and maximum sums that can be obtained by summing exactly four of the five integers.



\*\*Approach:\*\*

\- Calculate the total sum of all elements.

\- Find the minimum and maximum elements.

\- Minimum sum = total sum − maximum element.

\- Maximum sum = total sum − minimum element.



\*\*Time Complexity:\*\* O(N)



\*\*Auxiliary Space Complexity:\*\* O(1), excluding the input array.



\*\*Solution:\*\* \[View Solution](./01-Mini-Max-Sum/solution.cpp)



\*\*Challenge:\*\* https://www.hackerrank.com/challenges/mini-max-sum/problem



\---



\### 2. Birthday Cake Candles



\*\*Problem:\*\* Given the heights of candles, determine how many candles have the maximum height.



\*\*Approach:\*\*

\- Find the maximum candle height.

\- Traverse the array again.

\- Count how many candles have that maximum height.



\*\*Time Complexity:\*\* O(N)



\*\*Auxiliary Space Complexity:\*\* O(1), excluding the input array.



\*\*Solution:\*\* \[View Solution](./02-Birthday-Cake-Candles/solution.cpp)



\*\*Challenge:\*\* https://www.hackerrank.com/challenges/birthday-cake-candles/problem



\---



\### 3. Insertion Sort – Part 1



\*\*Problem:\*\* Insert the last element of an almost-sorted array into its correct position while displaying the array after each shift.



\*\*Approach:\*\*

\- Store the last element as the value to insert.

\- Compare it with elements from right to left.

\- Shift larger elements one position to the right.

\- Insert the stored value at its correct position.

\- Display the array after each shift and after insertion.



\*\*Time Complexity:\*\* O(N) for the single insertion performed in this problem.



\*\*Auxiliary Space Complexity:\*\* O(1), excluding the input array.



\*\*Solution:\*\* \[View Solution](./03-Insertion-Sort-Part-1/solution.cpp)



\*\*Challenge:\*\* https://www.hackerrank.com/challenges/insertionsort1/problem



\---



\### 4. Binary Search



\*\*Problem:\*\* Search for a target element in a sorted array using the Binary Search algorithm.



\*\*Approach:\*\*

\- Set the left and right boundaries of the search range.

\- Calculate the middle index.

\- Compare the middle element with the target.

\- If the target is larger, search the right half.

\- If the target is smaller, search the left half.

\- Continue until the target is found or the search range becomes empty.



\*\*Time Complexity:\*\* O(log N)



\*\*Auxiliary Space Complexity:\*\* O(1)



\*\*Solution:\*\* \[View Solution](./04-Binary-Search/solution.cpp)



\*\*Documentation:\*\* \[Binary Search README](./04-Binary-Search/README.md)



\---



\### 5. Mark and Toys



\*\*Problem:\*\* Given the prices of toys and a fixed amount of money, determine the maximum number of toys that can be purchased.



\*\*Approach:\*\*

\- Sort the toy prices in ascending order.

\- Start purchasing from the cheapest toy.

\- Continue while the total cost does not exceed the available budget.

\- Stop when the next toy cannot be purchased.



This is a greedy approach because purchasing the cheapest available toys first maximizes the number of toys that can be bought within the budget.



\*\*Time Complexity:\*\* O(N log N)



\*\*Auxiliary Space Complexity:\*\* O(1) auxiliary space apart from the input vector and sorting implementation.



\*\*Solution:\*\* \[View Solution](./05-Mark-and-Toys/solution.cpp)



\*\*Challenge:\*\* https://www.hackerrank.com/challenges/mark-and-toys/problem



\---



\## Complexity Summary



| # | Problem | Time Complexity | Auxiliary Space |

|---|---|---|---|

| 1 | Mini-Max Sum | O(N) | O(1) |

| 2 | Birthday Cake Candles | O(N) | O(1) |

| 3 | Insertion Sort – Part 1 | O(N) | O(1) |

| 4 | Binary Search | O(log N) | O(1) |

| 5 | Mark and Toys | O(N log N) | O(1)\* |



\\\*Auxiliary-space analysis excludes the input vector and implementation-dependent memory used internally by the sorting routine.



\---



\## Learning Outcomes



Through these problems, I practiced:



\- Array traversal and element comparison

\- Finding minimum and maximum values

\- Greedy algorithm design

\- Binary Search

\- Insertion Sort

\- Sorting and searching techniques

\- Time and space complexity analysis

\- Writing and organizing C++ solutions

\- Maintaining algorithm solutions in a GitHub repository



\---



\## HackerRank Profile



\*\*Prarthana H S\*\*



https://www.hackerrank.com/profile/Prarthana\_HS



\---



\## GitHub Profile



\*\*prarthana08prarthu\*\*



https://github.com/prarthana08prarthu



\---



\## Repository Structure



```text

HackerRank-3rdSem-Algorithm-Portfolio/

│

├── README.md

├── .gitignore

│

├── 01-Mini-Max-Sum/

│   └── solution.cpp

│

├── 02-Birthday-Cake-Candles/

│   └── solution.cpp

│

├── 03-Insertion-Sort-Part-1/

│   └── solution.cpp

│

├── 04-Binary-Search/

│   ├── solution.cpp

│   └── README.md

│

└── 05-Mark-and-Toys/

&#x20;   └── solution.cpp



Conclusion



This portfolio demonstrates my implementation of fundamental algorithms using C++. Completing these problems helped me strengthen my understanding of searching, sorting, array processing, greedy strategies, and algorithm complexity. The repository also provides a structured record of my coding practice and progress in algorithmic problem solving.







\### Now save it



In Notepad:



\*\*Ctrl + S\*\* → close Notepad.



Then in PowerShell, type only:



```powershell

dir





