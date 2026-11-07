#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = static_cast<int>(nums.size()) - 1;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] == target) return middle;
            if (nums[middle] < target) left = middle + 1;
            else right = middle - 1;
        }
        return -1;
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

    vector<int> nums{-1,0,3,5,9,12};
    expect(solution.search(nums,9) == 4, "target present");
    expect(solution.search(nums,2) == -1, "target absent");
    expect(solution.search(nums,-1) == 0, "first element");
    expect(solution.search(nums,12) == 5, "last element");
    nums = {5};
    expect(solution.search(nums,5) == 0, "singleton present");
    expect(solution.search(nums,1) == -1, "singleton absent");
    cout << "PASS 06 Binary Search: 6 cases\n";
    return 0;
}
#endif
