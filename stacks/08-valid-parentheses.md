# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach
Push opening brackets onto a vector used as a stack. Each closing bracket must match the latest opening bracket, and the stack must be empty after the complete scan.

## Complexity
- Time: O(n)
- Space: O(n)

## Notes
Crossed pairs such as ([)] are invalid even when counts match. Check for an empty stack before reading its top.

## Local testing
The source contains 6 checks behind `LOCAL_TEST`, including typical and edge cases. Run the full suite using `python run_tests.py`. For a single problem:

```powershell
g++ -std=c++14 -Wall -Wextra -pedantic -DLOCAL_TEST stacks\08-valid-parentheses.cpp -o build/08-valid-parentheses.exe
.\build\08-valid-parentheses.exe
```

Create the build directory first (`New-Item -ItemType Directory -Force build`). For LeetCode select C++ and paste the source; `LOCAL_TEST` is not defined there, so the local harness is excluded. LeetCode supplies ListNode for the linked-list problem.

## Online result
Accepted on 7 November 2026 using the NinjaMC account.

- [Verified submission](https://leetcode.com/problems/valid-parentheses/submissions/2191103630/)
- [Accepted screenshot](08-result.png)
- Local checks: 6 passed before submission.
