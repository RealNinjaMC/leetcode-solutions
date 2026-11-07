#include <algorithm>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int lowest = prices.front();
        int profit = 0;
        for (int price : prices) {
            profit = max(profit, price - lowest);
            lowest = min(lowest, price);
        }
        return profit;
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

    vector<int> prices{7,1,5,3,6,4};
    expect(solution.maxProfit(prices) == 5, "typical profitable trade");
    prices = {7,6,4,3,1};
    expect(solution.maxProfit(prices) == 0, "descending prices");
    prices = {5};
    expect(solution.maxProfit(prices) == 0, "single day");
    prices = {2,4,1};
    expect(solution.maxProfit(prices) == 2, "buy must precede sell");
    prices = {3,3,3};
    expect(solution.maxProfit(prices) == 0, "equal prices");
    cout << "PASS 04 Best Time to Buy and Sell Stock: 5 cases\n";
    return 0;
}
#endif
