/*
=========================================================
Problem: Longest Substring Without Repeating Characters
Platform: LeetCode / Striver SDE Sheet
Approach: Sliding Window

Algorithm:
1. Expand right pointer.
2. Remove duplicates from left.
3. Update maximum length.

Time Complexity: O(N)
Space Complexity: O(N)
=========================================================
*/

class Solution {
public:

    int lengthOfLongestSubstring(
        string s) {

        unordered_map<char,int> mp;

        int left = 0;
        int len = 0;

        for(int right = 0;
            right < s.size();
            right++) {

            if(mp.find(s[right])
               != mp.end()) {

                left =
                max(left,
                    mp[s[right]] + 1);
            }

            mp[s[right]] = right;

            len =
            max(len,
                right-left+1);
        }

        return len;
    }
};