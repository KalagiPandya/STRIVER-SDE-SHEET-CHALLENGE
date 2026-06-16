/*
=========================================================
Problem: Minimum Coins
Platform: GFG / Striver SDE Sheet
Approach: Greedy

Algorithm:
1. Use largest coin first.
2. Reduce remaining amount.
3. Continue until amount becomes 0.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

#include <vector>

using namespace std;

class Solution {
public:

    vector<int> minPartition(int N) {

        int coins[] =
        {2000,500,200,100,50,20,10,5,2,1};

        vector<int> ans;

        for(int i=0;i<10;i++) {

            while(N >= coins[i]) {

                N -= coins[i];

                ans.push_back(coins[i]);
            }
        }

        return ans;
    }
};