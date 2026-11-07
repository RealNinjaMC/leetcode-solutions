# LeetCode Solutions - Tharun Ramesh

**SRN:** R25EF295 | **Semester:** 3 | **Section:** F | **Class:** 3F

Personal LeetCode practice log - part of B25GE0101 portfolio.

This is Activity 6 for Portfolio Building, B25CS0311. The line above preserves the description requested by the worksheet, which uses a different course code.

## Contents

- [Arrays and strings](arrays-strings/)
- [Basic algorithms](basic-algorithms/)
- [Stacks](stacks/)
- [Linked lists](linked-lists/) - optional bonus
- [Progress tracker](PROGRESS.md)
- [Recorded local test results](TEST_RESULTS.json)

Eight required problems and the optional Reverse Linked List problem are included. The problem set is Easy on LeetCode, even though the worksheet describes its categories as Easy-Medium. Each solution has an explanation, time/space analysis, typical and edge-case tests, and its own online-result evidence when verified.

## Local tests

Requirements: Python 3 and a C++14-capable GCC compiler. No Python packages are required.

```powershell
python run_tests.py
```

To use this PC's existing compiler explicitly:

```powershell
python run_tests.py --compiler C:\MinGW\bin\g++.exe
```

The runner compiles each source with `-Wall -Wextra -pedantic -DLOCAL_TEST`, runs all checks, stops on warnings/errors, and records results in `TEST_RESULTS.json`. Build files stay in the ignored `build/` directory. The nine files contain 44 checks in total. Empty-input tests outside LeetCode's constraints are labeled defensive in their documentation.

## Submitting on LeetCode

Choose C++ and paste the solution source. Local test blocks are guarded by `LOCAL_TEST` and are excluded by the online judge. For the linked-list bonus, LeetCode supplies `ListNode`. Accepted results and submission links are recorded only after the judge confirms them; local passing tests alone are not online acceptance.

## Work record

Prepared with AI assistance on 7 November 2026. The solutions were created as local files and tested with GCC before online submission. The original code was generated through file tools rather than typed in VS Code. Read the explanations and practise reproducing the approaches independently. Per-problem personal solving time was not measured. Commit timestamps reflect this actual preparation session.
