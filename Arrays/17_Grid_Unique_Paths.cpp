/*
=========================================================
Problem: Grid Unique Paths
Platform: LeetCode / Striver SDE Sheet
Approach: Combinatorics

Algorithm:
1. Total moves = m+n-2
2. Down moves = m-1
3. Compute nCr

Time Complexity: O(min(m,n))
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    int uniquePaths(int m, int n) {

        int N = m + n - 2;
        int r = m - 1;

        double res = 1;

        for(int i = 1; i <= r; i++) {

            res = res * (N - r + i) / i;
        }

        return (int)res;
    }
};