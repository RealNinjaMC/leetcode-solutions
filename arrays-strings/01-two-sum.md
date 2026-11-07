# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

## Approach
Scan once while storing each earlier value and its index in a hash map. Look up the complement before inserting the current value, which prevents reusing the same array element.

## Complexity
- Time: O(n) expected; O(n^2) worst case with hash collisions
- Space: O(n)

## Notes
Duplicate values can form a valid pair, provided their indices differ. The problem guarantees a unique solution and bounds values so the complement fits an int.

## Local testing
The source contains 4 checks behind `LOCAL_TEST`, including typical and edge cases. Run the full suite using `python run_tests.py`. For a single problem:

```powershell
g++ -std=c++14 -Wall -Wextra -pedantic -DLOCAL_TEST arrays-strings\01-two-sum.cpp -o build/01-two-sum.exe
.\build\01-two-sum.exe
```

Create the build directory first (`New-Item -ItemType Directory -Force build`). For LeetCode select C++ and paste the source; `LOCAL_TEST` is not defined there, so the local harness is excluded. LeetCode supplies ListNode for the linked-list problem.

## Online result
Accepted on 7 November 2026 using the NinjaMC account.

- [Verified submission](https://leetcode.com/problems/two-sum/submissions/2191101234/)
- [Accepted screenshot](01-result.png)
- Local checks: 4 passed before submission.
