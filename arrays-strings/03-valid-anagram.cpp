#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        if (s.size() != t.size()) return false;
        array<int, 26> counts{};
        for (char letter : s) ++counts[letter - 'a'];
        for (char letter : t) {
            if (--counts[letter - 'a'] < 0) return false;
        }
        return true;
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

    expect(solution.isAnagram("anagram","nagaram"), "rearranged letters");
    expect(!solution.isAnagram("rat","car"), "different letters");
    expect(!solution.isAnagram("aacc","ccac"), "same length wrong multiplicity");
    expect(!solution.isAnagram("a","aa"), "different lengths");
    expect(solution.isAnagram("a","a"), "single letter");
    cout << "PASS 03 Valid Anagram: 5 cases\n";
    return 0;
}
#endif
