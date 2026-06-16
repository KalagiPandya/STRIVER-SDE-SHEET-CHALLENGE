/*
=========================================================
Problem: Find All Duplicates In Array
Platform: LeetCode
Approach: Mark Visited

Algorithm:
1. Use index marking.
2. Convert visited positions negative.
3. If already negative -> duplicate.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:

    vector<int> findDuplicates(
        vector<int>& nums) {

        vector<int> ans;

        for(int i = 0;
            i < nums.size();
            i++) {

            int idx =
            abs(nums[i]) - 1;

            if(nums[idx] < 0) {

                ans.push_back(idx + 1);
            }

            nums[idx] =
            -nums[idx];
        }

        return ans;
    }
};