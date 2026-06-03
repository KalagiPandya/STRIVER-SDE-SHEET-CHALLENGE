/*
=========================================================
Problem: Maximum Subarray
Platform: LeetCode / Striver SDE Sheet
Approach: Kadane's Algorithm

Algorithm:
1. Maintain current sum.
2. Add current element to sum.
3. Update maximum sum.
4. If sum becomes negative, reset it to 0.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    int maxSubArray(vector<int>& nums) {

        int maxi = nums[0];

        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            maxi = max(maxi, sum);

            if(sum < 0)
                sum = 0;
        }

        return maxi;
    }
};