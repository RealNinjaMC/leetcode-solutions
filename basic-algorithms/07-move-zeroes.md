# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach
Compact nonzero elements into the front of the original vector using a write index. Then fill the remaining positions with zeroes, preserving the relative order of nonzero elements.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
Negative values are nonzero and must keep their order. The method neither resizes nor copies the input vector.

## Local testing
The source contains 5 checks behind `LOCAL_TEST`, including typical and edge cases. Run the full suite using `python run_tests.py`. For a single problem:

```powershell
g++ -std=c++14 -Wall -Wextra -pedantic -DLOCAL_TEST basic-algorithms\07-move-zeroes.cpp -o build/07-move-zeroes.exe
.\build\07-move-zeroes.exe
```

Create the build directory first (`New-Item -ItemType Directory -Force build`). For LeetCode select C++ and paste the source; `LOCAL_TEST` is not defined there, so the local harness is excluded. LeetCode supplies ListNode for the linked-list problem.

## Online result
Accepted on 7 November 2026 using the NinjaMC account.

- [Verified submission](https://leetcode.com/problems/move-zeroes/submissions/2191103363/)
- [Accepted screenshot](07-result.png)
- Local checks: 5 passed before submission.
