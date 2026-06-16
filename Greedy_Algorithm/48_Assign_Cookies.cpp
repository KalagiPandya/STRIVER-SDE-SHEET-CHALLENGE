/*
=========================================================
Problem: Assign Cookies
Platform: LeetCode / Striver SDE Sheet
Approach: Greedy

Algorithm:
1. Sort greed and cookie arrays.
2. Assign smallest valid cookie.
3. Count satisfied children.

Time Complexity: O(N log N)
Space Complexity: O(1)
=========================================================
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    int findContentChildren(
        vector<int>& g,
        vector<int>& s) {

        sort(g.begin(),
             g.end());

        sort(s.begin(),
             s.end());

        int l = 0;
        int r = 0;

        while(l < g.size() &&
              r < s.size()) {

            if(s[r] >= g[l]) {

                l++;
            }

            r++;
        }

        return l;
    }
};