/*
=========================================================
Problem: Search In A 2D Matrix
Platform: LeetCode / Striver SDE Sheet
Approach: Binary Search

Algorithm:
1. Treat matrix as a sorted 1D array.
2. Apply Binary Search.
3. Convert mid into row and column.

Time Complexity: O(log(n*m))
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix,
                      int target) {

        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0;
        int high = n * m - 1;

        while(low <= high) {

            int mid = (low + high) / 2;

            int element =
            matrix[mid / m][mid % m];

            if(element == target)
                return true;

            else if(element < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return false;
    }
};