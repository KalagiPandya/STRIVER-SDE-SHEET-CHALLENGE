/*
=========================================================
Problem: Two Sum
Platform: LeetCode / Striver SDE Sheet
Approach: Hash Map

Algorithm:
1. Store elements in map.
2. Check if target - current exists.
3. Return indices.

Time Complexity: O(N)
Space Complexity: O(N)
=========================================================
*/

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {

            int rem = target - nums[i];

            if(mp.find(rem) != mp.end()) {

                return {mp[rem], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};