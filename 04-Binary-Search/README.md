# Binary Search

## Problem Summary

Given a sorted array and a target value, search for the target using the Binary Search algorithm. If the target is found, return its index; otherwise, report that the element is not present.

## Approach

Binary Search is used because the input array is sorted.

1. Set `left` to the first index and `right` to the last index.
2. Calculate the middle index.
3. Compare the middle element with the target.
4. If they are equal, return the middle index.
5. If the middle element is smaller than the target, search the right half.
6. Otherwise, search the left half.
7. Continue until the target is found or the search range becomes empty.

## Time Complexity

**O(log N)**

Each iteration eliminates approximately half of the remaining elements.

## Auxiliary Space Complexity

**O(1)**

The iterative implementation uses only a constant amount of additional memory.

## Alternative Approach

A linear search could check every element from left to right.

- Time Complexity: O(N)
- Auxiliary Space: O(1)

Binary Search is more efficient for a sorted array because its search range is reduced by half at every step.

## Test Cases

### Test Case 1

Input:

```text
7
1 3 5 7 9 11 13
9

```text
Element found at index 4
```

### Test Case 2

Input:

```text
7
1 3 5 7 9 11 13
8
```

Output:

```text
Element not found
```