#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> open;
        for (char bracket : s) {
            if (bracket == '(' || bracket == '[' || bracket == '{') {
                open.push_back(bracket);
            } else {
                if (open.empty()) return false;
                char previous = open.back();
                if ((bracket == ')' && previous != '(') ||
                    (bracket == ']' && previous != '[') ||
                    (bracket == '}' && previous != '{')) return false;
                open.pop_back();
            }
        }
        return open.empty();
    }
};
#ifdef LOCAL_TEST
#include <iostream>
#include <stdexcept>

void expect(bool result, const string& test) {
    if (!result) throw runtime_error(test);
}

int main() {
    Solution solution;

    expect(solution.isValid("()[]{}"), "separate bracket pairs");
    expect(solution.isValid("{[()]}"), "nested bracket types");
    expect(!solution.isValid("([)]"), "crossed nesting");
    expect(!solution.isValid("]"), "closing without opener");
    expect(!solution.isValid("(("), "unclosed openers");
    expect(!solution.isValid("(]"), "wrong closing type");
    cout << "PASS 08 Valid Parentheses: 6 cases\n";
    return 0;
}
#endif
