/*
=========================================================
Problem: Merge Two Sorted Arrays Without Extra Space
Platform: Striver SDE Sheet
Approach: Gap Method

Algorithm:
1. Treat both arrays as one array.
2. Compute gap = ceil((n+m)/2).
3. Compare elements gap apart.
4. Swap if needed.
5. Reduce gap until 1.

Time Complexity: O((N+M) log(N+M))
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    void merge(long long arr1[],
               long long arr2[],
               int n,
               int m) {

        int len = n + m;

        int gap = (len / 2) + (len % 2);

        while(gap > 0) {

            int left = 0;
            int right = left + gap;

            while(right < len) {

                if(left < n && right >= n) {

                    if(arr1[left] >
                       arr2[right - n])

                        swap(arr1[left],
                             arr2[right - n]);
                }

                else if(left >= n) {

                    if(arr2[left - n] >
                       arr2[right - n])

                        swap(arr2[left - n],
                             arr2[right - n]);
                }

                else {

                    if(arr1[left] >
                       arr1[right])

                        swap(arr1[left],
                             arr1[right]);
                }

                left++;
                right++;
            }

            if(gap == 1)
                break;

            gap = (gap / 2) + (gap % 2);
        }
    }
};