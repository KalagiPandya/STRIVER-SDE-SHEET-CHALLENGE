/*
=========================================================
Problem: Pascal Triangle I
Platform: Striver SDE Sheet
Approach: nCr Formula

Time Complexity: O(c)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    int nCr(int n, int r) {

        long long res = 1;

        for(int i = 0; i < r; i++) {

            res = res * (n - i);
            res = res / (i + 1);
        }

        return (int)res;
    }

    int pascalTriangle(int r, int c) {

        return nCr(r - 1, c - 1);
    }
};