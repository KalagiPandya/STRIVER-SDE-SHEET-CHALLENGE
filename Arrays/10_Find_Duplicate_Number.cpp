/*
=========================================================
Problem: Find Duplicate Number
Platform: LeetCode / Striver SDE Sheet
Approach: Floyd's Cycle Detection

Algorithm:
1. Use slow and fast pointers.
2. Find intersection point.
3. Move one pointer to start.
4. Move both one step.
5. Meeting point = duplicate number.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];

        do {

            slow = nums[slow];
            fast = nums[nums[fast]];

        } while(slow != fast);

        fast = nums[0];

        while(slow != fast) {

            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};