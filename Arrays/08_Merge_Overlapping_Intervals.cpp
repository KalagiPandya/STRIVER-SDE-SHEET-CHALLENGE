/*
=========================================================
Problem: Merge Overlapping Intervals
Platform: LeetCode / Striver SDE Sheet
Approach: Sorting

Algorithm:
1. Sort intervals.
2. Take first interval.
3. If overlap exists, merge.
4. Otherwise push new interval.

Time Complexity: O(N log N)
Space Complexity: O(N)
=========================================================
*/
#include<bits/stdc++.h>

class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end());

        for(auto it : intervals) {

            if(ans.empty() ||
               ans.back()[1] < it[0]) {

                ans.push_back(it);
            }

            else {

                ans.back()[1] =
                max(ans.back()[1], it[1]);
            }
        }

        return ans;
    }
};