/*
=========================================================
Problem: Subsets II
Platform: LeetCode / Striver SDE Sheet
Approach: Backtracking

Algorithm:
1. Generate subsets recursively.
2. Skip duplicates.
3. Store unique subsets.

Time Complexity: O(2^N)
Space Complexity: O(2^N)
=========================================================
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    void solve(
        int idx,
        vector<int>& nums,
        vector<int>& ds,
        vector<vector<int>>& ans) {

        ans.push_back(ds);

        for(int i=idx;
            i<nums.size();
            i++) {

            if(i != idx &&
               nums[i] ==
               nums[i-1])
                continue;

            ds.push_back(nums[i]);

            solve(
                i+1,
                nums,
                ds,
                ans
            );

            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(
        vector<int>& nums) {

        sort(nums.begin(),
             nums.end());

        vector<vector<int>> ans;

        vector<int> ds;

        solve(
            0,
            nums,
            ds,
            ans
        );

        return ans;
    }
};