/*
=========================================================
Problem: Best Time To Buy And Sell Stock
Platform: LeetCode / Striver SDE Sheet
Approach: Optimal Solution

Algorithm:
1. Keep track of minimum price so far.
2. Calculate profit at each day.
3. Update maximum profit.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    int maxProfit(vector<int>& prices) {

        int mini = prices[0];

        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {

            int cost = prices[i] - mini;

            profit = max(profit, cost);

            mini = min(mini, prices[i]);
        }

        return profit;
    }
};