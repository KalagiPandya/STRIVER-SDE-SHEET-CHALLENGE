/*
=========================================================
Problem: Subarray Sum Equals K
Platform: LeetCode
Approach: Prefix Sum + HashMap

Algorithm:
1. Maintain prefix sum.
2. Check if (prefixSum-k) exists.
3. Count valid subarrays.

Time Complexity: O(N)
Space Complexity: O(N)
=========================================================
*/

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:

    int subarraySum(
        vector<int>& nums,
        int k) {

        unordered_map<int,int> mp;

        mp[0] = 1;

        int prefixSum = 0;
        int cnt = 0;

        for(int i = 0;
            i < nums.size();
            i++) {

            prefixSum += nums[i];

            int remove =
            prefixSum - k;

            cnt += mp[remove];

            mp[prefixSum]++;
        }

        return cnt;
    }
};