/*
=========================================================
Problem: Pow(x,n)
Platform: LeetCode / Striver SDE Sheet
Approach: Binary Exponentiation

Algorithm:
1. If n is odd:
      multiply answer
2. Square x
3. Divide n by 2

Time Complexity: O(log n)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    double myPow(double x, int n) {

        long long nn = n;

        if(nn < 0)
            nn = -1 * nn;

        double ans = 1.0;

        while(nn) {

            if(nn % 2) {

                ans *= x;
                nn--;
            }

            else {

                x *= x;
                nn /= 2;
            }
        }

        if(n < 0)
            ans = 1.0 / ans;

        return ans;
    }
};