#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = static_cast<int>(s.size()) - 1;
        while (left < right) swap(s[left++], s[right--]);
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

    vector<char> letters{'h','e','l','l','o'};
    solution.reverseString(letters);
    expect(letters == vector<char>({'o','l','l','e','h'}), "odd length");
    letters = {'H','a','n','n','a','h'};
    solution.reverseString(letters);
    expect(letters == vector<char>({'h','a','n','n','a','H'}), "even length and case");
    letters = {'x'};
    solution.reverseString(letters);
    expect(letters == vector<char>({'x'}), "single character");
    letters.clear();
    solution.reverseString(letters);
    expect(letters.empty(), "defensive empty input");
    cout << "PASS 02 Reverse String: 4 cases\n";
    return 0;
}
#endif
