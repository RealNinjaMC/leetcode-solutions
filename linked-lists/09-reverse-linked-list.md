# Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach
Walk through the linked list and reverse each next pointer. Save the following node before modifying the current link, then return the last visited node as the new head.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
The former head must become a tail ending in nullptr. Local tests check node identity and links, not just the displayed values; this is the optional bonus problem.

## Local testing
The source contains 4 checks behind `LOCAL_TEST`, including typical and edge cases. Run the full suite using `python run_tests.py`. For a single problem:

```powershell
g++ -std=c++14 -Wall -Wextra -pedantic -DLOCAL_TEST linked-lists\09-reverse-linked-list.cpp -o build/09-reverse-linked-list.exe
.\build\09-reverse-linked-list.exe
```

Create the build directory first (`New-Item -ItemType Directory -Force build`). For LeetCode select C++ and paste the source; `LOCAL_TEST` is not defined there, so the local harness is excluded. LeetCode supplies ListNode for the linked-list problem.

## Online result
Accepted on 7 November 2026 using the NinjaMC account.

- [Verified submission](https://leetcode.com/problems/reverse-linked-list/submissions/2191104146/)
- [Accepted screenshot](09-result.png)
- Local checks: 4 passed before submission.
