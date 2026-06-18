/*
=========================================================
Problem: Permutations
Platform: LeetCode / Striver SDE Sheet
Approach: Backtracking

Algorithm:
1. Swap current element with all possible elements.
2. Generate permutations recursively.
3. Backtrack after recursion.

Time Complexity: O(N! × N)
Space Complexity: O(N)
=========================================================
*/

#include <vector>

using namespace std;

class Solution {
public:

    void solve(
        int index,
        vector<int>& nums,
        vector<vector<int>>& ans) {

        if(index == nums.size()) {

            ans.push_back(nums);

            return;
        }

        for(int i=index;i<nums.size();i++) {

            swap(nums[index], nums[i]);

            solve(
                index+1,
                nums,
                ans
            );

            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(
        vector<int>& nums) {

        vector<vector<int>> ans;

        solve(
            0,
            nums,
            ans
        );

        return ans;
    }
};