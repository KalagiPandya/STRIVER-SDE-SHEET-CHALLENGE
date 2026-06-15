/*
=========================================================
Problem: Maximum Consecutive Ones
Platform: LeetCode / Striver SDE Sheet
Approach: Linear Traversal

Algorithm:
1. Count continuous ones.
2. Reset on zero.
3. Track maximum count.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    int findMaxConsecutiveOnes(
        vector<int>& nums) {

        int cnt = 0;
        int maxi = 0;

        for(int i = 0;
            i < nums.size();
            i++) {

            if(nums[i] == 1) {

                cnt++;

                maxi =
                max(maxi,cnt);
            }

            else {

                cnt = 0;
            }
        }

        return maxi;
    }
};