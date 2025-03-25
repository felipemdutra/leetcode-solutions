#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX;
    int max_profit = 0;

    for (auto& price : prices) {
        if (price < min_price) {
            min_price = price;
        } else {
            int curr_profit = price - min_price;
            if (curr_profit > max_profit) {
                max_profit = curr_profit;
            }
        }
    }

    return max_profit;
}

int main() {
    vector<int> prices = {2,4,1};
    int profit = maxProfit(prices);
    cout << "Profit: " << profit << "\n";
}

