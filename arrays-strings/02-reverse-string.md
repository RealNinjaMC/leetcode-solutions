# Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

## Approach
Use a left pointer and a right pointer and swap the characters they reference. Move both pointers inward until they meet, modifying the supplied vector directly.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
A single character stays unchanged. An extra defensive empty-input test is included, although LeetCode requires a nonempty array.

## Local testing
The source contains 4 checks behind `LOCAL_TEST`, including typical and edge cases. Run the full suite using `python run_tests.py`. For a single problem:

```powershell
g++ -std=c++14 -Wall -Wextra -pedantic -DLOCAL_TEST arrays-strings\02-reverse-string.cpp -o build/02-reverse-string.exe
.\build\02-reverse-string.exe
```

Create the build directory first (`New-Item -ItemType Directory -Force build`). For LeetCode select C++ and paste the source; `LOCAL_TEST` is not defined there, so the local harness is excluded. LeetCode supplies ListNode for the linked-list problem.

## Online result
Accepted on 7 November 2026 using the NinjaMC account.

- [Verified submission](https://leetcode.com/problems/reverse-string/submissions/2191101917/)
- [Accepted screenshot](02-result.png)
- Local checks: 4 passed before submission.
