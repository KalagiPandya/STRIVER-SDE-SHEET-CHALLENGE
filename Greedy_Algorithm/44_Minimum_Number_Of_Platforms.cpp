/*
=========================================================
Problem: Minimum Number Of Platforms
Platform: GFG / Striver SDE Sheet
Approach: Greedy + Sorting

Time Complexity: O(N log N)
Space Complexity: O(1)
=========================================================
*/

#include <algorithm>

using namespace std;

class Solution {
public:

    int findPlatform(
        int arr[],
        int dep[],
        int n) {

        sort(arr,
             arr+n);

        sort(dep,
             dep+n);

        int plat_needed = 1;
        int result = 1;

        int i = 1;
        int j = 0;

        while(i < n &&
              j < n) {

            if(arr[i] <= dep[j]) {

                plat_needed++;

                i++;
            }

            else {

                plat_needed--;

                j++;
            }

            result =
            max(result,
                plat_needed);
        }

        return result;
    }
};