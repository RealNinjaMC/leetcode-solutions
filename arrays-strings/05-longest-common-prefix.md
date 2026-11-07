# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach
Compare each character position of the first string with the same position in every other string. At the first mismatch or exhausted string, return the prefix before that position.

## Complexity
- Time: O(k * m), k strings and first-string length m
- Space: O(1) auxiliary; O(m) for returned string

## Notes
An empty member forces an empty prefix. Bounds are checked before indexing a shorter string.

## Local testing
The source contains 5 checks behind `LOCAL_TEST`, including typical and edge cases. Run the full suite using `python run_tests.py`. For a single problem:

```powershell
g++ -std=c++14 -Wall -Wextra -pedantic -DLOCAL_TEST arrays-strings\05-longest-common-prefix.cpp -o build/05-longest-common-prefix.exe
.\build\05-longest-common-prefix.exe
```

Create the build directory first (`New-Item -ItemType Directory -Force build`). For LeetCode select C++ and paste the source; `LOCAL_TEST` is not defined there, so the local harness is excluded. LeetCode supplies ListNode for the linked-list problem.

## Online result
Accepted on 7 November 2026 using the NinjaMC account.

- [Verified submission](https://leetcode.com/problems/longest-common-prefix/submissions/2191102948/)
- [Accepted screenshot](05-result.png)
- Local checks: 5 passed before submission.
