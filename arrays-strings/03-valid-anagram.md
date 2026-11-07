# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach
Count the lowercase English letters in the first string using 26 counters. Subtract counts while scanning the second string; a negative count or unequal lengths rules out an anagram.

## Complexity
- Time: O(n + m)
- Space: O(1) auxiliary; inputs passed by const reference

## Notes
Equal length alone is insufficient: repeated letters must have matching frequencies. Unicode would need a different representation and counting strategy.

## Local testing
The source contains 5 checks behind `LOCAL_TEST`, including typical and edge cases. Run the full suite using `python run_tests.py`. For a single problem:

```powershell
g++ -std=c++14 -Wall -Wextra -pedantic -DLOCAL_TEST arrays-strings\03-valid-anagram.cpp -o build/03-valid-anagram.exe
.\build\03-valid-anagram.exe
```

Create the build directory first (`New-Item -ItemType Directory -Force build`). For LeetCode select C++ and paste the source; `LOCAL_TEST` is not defined there, so the local harness is excluded. LeetCode supplies ListNode for the linked-list problem.

## Online result
Accepted on 7 November 2026 using the NinjaMC account.

- [Verified submission](https://leetcode.com/problems/valid-anagram/submissions/2191102370/)
- [Accepted screenshot](03-result.png)
- Local checks: 5 passed before submission.
