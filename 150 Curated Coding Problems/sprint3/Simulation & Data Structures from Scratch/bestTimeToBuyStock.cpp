#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int maxProfit(vector<int>& prices) {
    int maxprofit = 0;
    int buyWindow = prices[0];
    for (int i = 1; i < prices.size(); i++) {
        int profit = prices[i] - buyWindow;
        if (profit < 0)
            buyWindow = prices[i];
        else
            maxprofit = max(profit, maxprofit);
    }
    return maxprofit;
}
int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (auto& price : prices) {
        cin >> price;
    }
    cout << maxProfit(prices) << endl;

    return 0;
}