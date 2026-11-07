#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            auto match = seen.find(target - nums[i]);
            if (match != seen.end()) return {match->second, i};
            seen[nums[i]] = i;
        }
        return {};
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

    vector<int> nums{2,7,11,15};
    auto answer = solution.twoSum(nums,9);
    expect(answer == vector<int>({0,1}) || answer == vector<int>({1,0}), "typical pair");
    nums = {3,3};
    answer = solution.twoSum(nums,6);
    expect(answer == vector<int>({0,1}) || answer == vector<int>({1,0}), "duplicates use distinct indices");
    nums = {-3,4,3,90};
    answer = solution.twoSum(nums,0);
    expect(answer == vector<int>({0,2}) || answer == vector<int>({2,0}), "negative complement");
    nums = {0,4,3,0};
    answer = solution.twoSum(nums,0);
    expect(answer == vector<int>({0,3}) || answer == vector<int>({3,0}), "two zeroes");
    cout << "PASS 01 Two Sum: 4 cases\n";
    return 0;
}
#endif
