/*
=========================================================
Problem: Subset Sums
Platform: GFG / Striver SDE Sheet
Approach: Recursion

Algorithm:
1. Pick the element.
2. Do not pick the element.
3. Store all subset sums.

Time Complexity: O(2^N)
Space Complexity: O(2^N)
=========================================================
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    void solve(
        int idx,
        int sum,
        vector<int>& arr,
        int N,
        vector<int>& ans) {

        if(idx == N) {

            ans.push_back(sum);

            return;
        }

        solve(
            idx+1,
            sum+arr[idx],
            arr,
            N,
            ans
        );

        solve(
            idx+1,
            sum,
            arr,
            N,
            ans
        );
    }

    vector<int> subsetSums(
        vector<int> arr,
        int N) {

        vector<int> ans;

        solve(
            0,
            0,
            arr,
            N,
            ans
        );

        sort(ans.begin(),
             ans.end());

        return ans;
    }
};