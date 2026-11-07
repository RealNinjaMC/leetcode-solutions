#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        for (size_t index = 0; index < strs.front().size(); ++index) {
            for (size_t word = 1; word < strs.size(); ++word) {
                if (index >= strs[word].size() || strs[word][index] != strs.front()[index]) {
                    return strs.front().substr(0, index);
                }
            }
        }
        return strs.front();
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

    vector<string> words{"flower","flow","flight"};
    expect(solution.longestCommonPrefix(words) == "fl", "shared prefix");
    words = {"dog","racecar","car"};
    expect(solution.longestCommonPrefix(words).empty(), "no shared prefix");
    words = {"","abc"};
    expect(solution.longestCommonPrefix(words).empty(), "empty string");
    words = {"alone"};
    expect(solution.longestCommonPrefix(words) == "alone", "one string");
    words = {"abc","ab"};
    expect(solution.longestCommonPrefix(words) == "ab", "shortest string bounds prefix");
    cout << "PASS 05 Longest Common Prefix: 5 cases\n";
    return 0;
}
#endif
