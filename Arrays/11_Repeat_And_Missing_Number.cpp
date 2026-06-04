/*
=========================================================
Problem: Repeat And Missing Number
Platform: Striver SDE Sheet
Approach: Mathematical Formula

Algorithm:
1. Find expected sum and actual sum.
2. Find expected square sum and actual square sum.
3. Solve equations:
   x - y
   x² - y²
4. Find repeating and missing number.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    vector<int> repeatedNumber(vector<int>& nums) {

        long long n = nums.size();

        long long SN = (n * (n + 1)) / 2;

        long long S2N =
        (n * (n + 1) * (2 * n + 1)) / 6;

        long long S = 0;
        long long S2 = 0;

        for(int i = 0; i < n; i++) {

            S += nums[i];

            S2 += (long long)nums[i] *
                  (long long)nums[i];
        }

        long long val1 = S - SN;

        long long val2 = S2 - S2N;

        val2 = val2 / val1;

        long long x =
        (val1 + val2) / 2;

        long long y =
        x - val1;

        return {(int)x, (int)y};
    }
};