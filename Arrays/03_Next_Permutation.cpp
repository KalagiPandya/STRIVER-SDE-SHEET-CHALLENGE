/*
=========================================================
Problem: Next Permutation
Platform: LeetCode / Striver SDE Sheet
Approach: Striver Optimal Solution

Algorithm:
1. Find the breakpoint from the right.
   -> First index i such that nums[i] < nums[i+1]

2. Find the first element greater than breakpoint.
   -> Traverse from right and find nums[j] > nums[i]

3. Swap them.
   -> Swap nums[i] and nums[j]

4. Reverse the remaining suffix.
   -> Reverse elements from i+1 to n-1

Example:

Input:
1 2 3

Breakpoint = 2

Swap:
1 3 2

Reverse suffix:
1 3 2

Output:
1 3 2

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        int ind = -1;

        // Step 1: Find breakpoint

        for(int i = n - 2; i >= 0; i--) {

            if(nums[i] < nums[i + 1]) {

                ind = i;
                break;
            }
        }

        // No breakpoint found
        // Array is in descending order

        if(ind == -1) {

            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find first greater element
        // from the right side

        for(int i = n - 1; i > ind; i--) {

            if(nums[i] > nums[ind]) {

                // Step 3: Swap

                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 4: Reverse remaining suffix

        reverse(nums.begin() + ind + 1, nums.end());
    }
};