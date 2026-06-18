/*
=========================================================
Problem: Permutation Sequence
Platform: LeetCode / Striver SDE Sheet
Approach: Factorial Number System

Algorithm:
1. Calculate factorials.
2. Find index using k/fact.
3. Remove used number.
4. Repeat until answer formed.

Time Complexity: O(N²)
Space Complexity: O(N)
=========================================================
*/

#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    string getPermutation(
        int n,
        int k) {

        int fact = 1;

        vector<int> numbers;

        for(int i=1;i<n;i++) {

            fact *= i;

            numbers.push_back(i);
        }

        numbers.push_back(n);

        string ans = "";

        k = k - 1;

        while(true) {

            ans +=
            to_string(
                numbers[k/fact]
            );

            numbers.erase(
                numbers.begin()
                + k/fact
            );

            if(numbers.size() == 0)
                break;

            k %= fact;

            fact /= numbers.size();
        }

        return ans;
    }
};