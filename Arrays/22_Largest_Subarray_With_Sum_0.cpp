/*
=========================================================
Problem: Largest Subarray With Sum 0
Platform: Striver SDE Sheet
Approach: Prefix Sum + HashMap

Algorithm:
1. Maintain prefix sum.
2. If prefix sum repeats,
   subarray sum is 0.
3. Store first occurrence only.

Time Complexity: O(N)
Space Complexity: O(N)
=========================================================
*/

class Solution {
public:

    int maxLen(vector<int>& A, int n) {

        unordered_map<int,int> mp;

        int sum = 0;
        int maxi = 0;

        for(int i = 0; i < n; i++) {

            sum += A[i];

            if(sum == 0)
                maxi = i + 1;

            if(mp.find(sum) != mp.end()) {

                maxi = max(maxi,
                           i - mp[sum]);
            }

            else {

                mp[sum] = i;
            }
        }

        return maxi;
    }
};