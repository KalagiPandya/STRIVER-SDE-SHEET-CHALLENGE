/*
=========================================================
Problem: Rotate Matrix By 90 Degrees
Platform: LeetCode / Striver SDE Sheet
Approach: Transpose + Reverse

Algorithm:
1. Transpose the matrix.
2. Reverse every row.

Time Complexity: O(N²)
Space Complexity: O(1)
=========================================================
*/
#include<bits/stdc++.h>


class Solution {
public:

    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // Step 1: Transpose

        for(int i = 0; i < n; i++) {

            for(int j = i + 1; j < n; j++) {

                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse every row

        for(int i = 0; i < n; i++) {

            reverse(matrix[i].begin(),
                    matrix[i].end());
        }
    }
};