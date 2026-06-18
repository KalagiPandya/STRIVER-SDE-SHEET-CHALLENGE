/*
=========================================================
Problem: Palindrome Partitioning
Platform: LeetCode / Striver SDE Sheet
Approach: Backtracking

Algorithm:
1. Generate all possible partitions.
2. Check palindrome before picking.
3. Store valid partition.

Time Complexity: O(N * 2^N)
Space Complexity: O(N)
=========================================================
*/

#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    bool isPalindrome(
        string s,
        int start,
        int end) {

        while(start <= end) {

            if(s[start++] != s[end--])
                return false;
        }

        return true;
    }

    void solve(
        int index,
        string s,
        vector<string>& path,
        vector<vector<string>>& ans) {

        if(index == s.size()) {

            ans.push_back(path);

            return;
        }

        for(int i=index;i<s.size();i++) {

            if(isPalindrome(s,index,i)) {

                path.push_back(
                    s.substr(
                        index,
                        i-index+1
                    )
                );

                solve(
                    i+1,
                    s,
                    path,
                    ans
                );

                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(
        string s) {

        vector<vector<string>> ans;

        vector<string> path;

        solve(
            0,
            s,
            path,
            ans
        );

        return ans;
    }
};