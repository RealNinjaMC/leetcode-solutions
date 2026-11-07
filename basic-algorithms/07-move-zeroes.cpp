#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t write = 0;
        for (size_t read = 0; read < nums.size(); ++read) {
            if (nums[read] != 0) nums[write++] = nums[read];
        }
        while (write < nums.size()) nums[write++] = 0;
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

    vector<int> nums{0,1,0,3,12};
    solution.moveZeroes(nums);
    expect(nums == vector<int>({1,3,12,0,0}), "stable nonzero order");
    nums = {0}; solution.moveZeroes(nums);
    expect(nums == vector<int>({0}), "single zero");
    nums = {1,2,3}; solution.moveZeroes(nums);
    expect(nums == vector<int>({1,2,3}), "no zeroes");
    nums = {0,0,0}; solution.moveZeroes(nums);
    expect(nums == vector<int>({0,0,0}), "all zeroes");
    nums = {-1,0,-2,0,3}; solution.moveZeroes(nums);
    expect(nums == vector<int>({-1,-2,3,0,0}), "negative nonzero values");
    cout << "PASS 07 Move Zeroes: 5 cases\n";
    return 0;
}
#endif
