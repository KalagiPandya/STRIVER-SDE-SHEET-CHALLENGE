/*
=========================================================
Problem: Majority Element
Platform: LeetCode / Striver SDE Sheet
Approach: Moore Voting Algorithm

Algorithm:
1. Maintain candidate and count.
2. If count becomes 0:
      choose new candidate.
3. Increment/decrement count.
4. Candidate is answer.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    int majorityElement(vector<int>& nums) {

        int cnt = 0;
        int el = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(cnt == 0) {

                cnt = 1;
                el = nums[i];
            }

            else if(nums[i] == el) {

                cnt++;
            }

            else {

                cnt--;
            }
        }

        return el;
    }
};