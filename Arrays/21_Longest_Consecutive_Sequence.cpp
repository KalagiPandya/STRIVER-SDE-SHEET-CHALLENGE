/*
=========================================================
Problem: Longest Consecutive Sequence
Platform: LeetCode / Striver SDE Sheet
Approach: Hash Set

Algorithm:
1. Store all elements in set.
2. Start only from sequence beginning.
3. Count consecutive elements.

Time Complexity: O(N)
Space Complexity: O(N)
=========================================================
*/

class Solution {
public:

    int longestConsecutive(
        vector<int>& nums) {

        unordered_set<int> st;

        for(int x : nums)
            st.insert(x);

        int longest = 0;

        for(auto it : st) {

            if(st.find(it-1) ==
               st.end()) {

                int cnt = 1;
                int x = it;

                while(st.find(x+1)
                      != st.end()) {

                    x++;
                    cnt++;
                }

                longest =
                max(longest,cnt);
            }
        }

        return longest;
    }
};