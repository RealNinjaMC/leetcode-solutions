# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach
Keep the lowest price seen and the best profit so far. For each day, compare selling at that price against the earlier minimum, and update the minimum for later days.

## Complexity
- Time: O(n)
- Space: O(1)

## Notes
A declining price sequence yields zero profit. Choosing the global maximum and minimum without respecting their order can produce an invalid trade.

## Local testing
The source contains 5 checks behind `LOCAL_TEST`, including typical and edge cases. Run the full suite using `python run_tests.py`. For a single problem:

```powershell
g++ -std=c++14 -Wall -Wextra -pedantic -DLOCAL_TEST arrays-strings\04-best-time-to-buy-and-sell-stock.cpp -o build/04-best-time-to-buy-and-sell-stock.exe
.\build\04-best-time-to-buy-and-sell-stock.exe
```

Create the build directory first (`New-Item -ItemType Directory -Force build`). For LeetCode select C++ and paste the source; `LOCAL_TEST` is not defined there, so the local harness is excluded. LeetCode supplies ListNode for the linked-list problem.

## Online result
Accepted on 7 November 2026 using the NinjaMC account.

- [Verified submission](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2191102629/)
- [Accepted screenshot](04-result.png)
- Local checks: 5 passed before submission.
