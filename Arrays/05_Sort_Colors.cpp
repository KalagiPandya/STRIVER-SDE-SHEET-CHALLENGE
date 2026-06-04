/*
=========================================================
Problem: Sort Colors
Platform: LeetCode / Striver SDE Sheet
Approach: Dutch National Flag Algorithm

Algorithm:
1. low -> boundary for 0s
2. mid -> current element
3. high -> boundary for 2s

If nums[mid] == 0:
    swap(low, mid)
    low++, mid++

If nums[mid] == 1:
    mid++

If nums[mid] == 2:
    swap(mid, high)
    high--

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/
class Solution {
public:

    void sortColors(vector<int>& nums) {

        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while(mid <= high) {

            if(nums[mid] == 0) {

                swap(nums[low], nums[mid]);

                low++;
                mid++;
            }

            else if(nums[mid] == 1) {

                mid++;
            }

            else {

                swap(nums[mid], nums[high]);

                high--;
            }
        }
    }
};