# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach
Maintain an inclusive search interval in the sorted array and inspect its midpoint. Discard the half that cannot contain the target until a match is found or the interval becomes empty.

## Complexity
- Time: O(log n)
- Space: O(1)

## Notes
The loop uses left <= right so a singleton interval is searched. Computing left + (right-left)/2 avoids adding two large indices.

## Local testing
The source contains 6 checks behind `LOCAL_TEST`, including typical and edge cases. Run the full suite using `python run_tests.py`. For a single problem:

```powershell
g++ -std=c++14 -Wall -Wextra -pedantic -DLOCAL_TEST basic-algorithms\06-binary-search.cpp -o build/06-binary-search.exe
.\build\06-binary-search.exe
```

Create the build directory first (`New-Item -ItemType Directory -Force build`). For LeetCode select C++ and paste the source; `LOCAL_TEST` is not defined there, so the local harness is excluded. LeetCode supplies ListNode for the linked-list problem.

## Online result
Accepted on 7 November 2026 using the NinjaMC account.

- [Verified submission](https://leetcode.com/problems/binary-search/submissions/2191103185/)
- [Accepted screenshot](06-result.png)
- Local checks: 6 passed before submission.
