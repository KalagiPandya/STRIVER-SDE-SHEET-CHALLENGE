/*
=========================================================
Problem: Remove Duplicates From Sorted Array
Platform: LeetCode / Striver SDE Sheet
Approach: Two Pointer

Algorithm:
1. Maintain unique index.
2. Replace duplicates.
3. Return new length.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    int removeDuplicates(
        vector<int>& nums) {

        int i = 0;

        for(int j = 1;
            j < nums.size();
            j++) {

            if(nums[i] != nums[j]) {

                i++;

                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};