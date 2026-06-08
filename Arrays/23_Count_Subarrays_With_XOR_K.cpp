/*
=========================================================
Problem: Count Subarrays With Given XOR K
Platform: Striver SDE Sheet
Approach: Prefix XOR + HashMap

Time Complexity: O(N)
Space Complexity: O(N)
=========================================================
*/

class Solution {
public:

    int solve(vector<int>& A,
              int B) {

        unordered_map<int,int> mp;

        int xr = 0;
        int cnt = 0;

        mp[xr]++;

        for(int i = 0; i < A.size(); i++) {

            xr ^= A[i];

            int x = xr ^ B;

            cnt += mp[x];

            mp[xr]++;
        }

        return cnt;
    }
};