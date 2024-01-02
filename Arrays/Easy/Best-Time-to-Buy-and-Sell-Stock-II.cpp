/*
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.
*/

/*
1)  Input: prices = [7,1,5,3,6,4]
    Output: 7
    Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
    Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
    Total profit is 4 + 3 = 7.
2)  Input: prices = [1,2,3,4,5]
    Output: 4
    Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
    Total profit is 4.
3)  Input: prices = [7,6,4,3,1]
    Output: 0
    Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int totalProfit = 0;
    int length = prices.size();
    int prevStockPrice = (length > 0 ? prices[0] : INT_MIN);
    for(int i = 1; i < length; ++i) {
    int curProfit = prices[i] - prevStockPrice;
    if(curProfit > 0) {
        totalProfit += (curProfit);
    }
    prevStockPrice = prices[i];
    }
    
    return totalProfit;
};