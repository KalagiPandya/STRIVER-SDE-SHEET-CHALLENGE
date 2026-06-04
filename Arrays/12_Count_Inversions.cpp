/*
=========================================================
Problem: Count Inversions
Platform: Striver SDE Sheet
Approach: Merge Sort

Algorithm:
1. Divide array into halves.
2. Count inversions in left half.
3. Count inversions in right half.
4. Count inversions while merging.

Time Complexity: O(N log N)
Space Complexity: O(N)
=========================================================
*/

class Solution {

public:

    long long merge(vector<int>& arr,
                    int low,
                    int mid,
                    int high) {

        vector<int> temp;

        int left = low;
        int right = mid + 1;

        long long cnt = 0;

        while(left <= mid &&
              right <= high) {

            if(arr[left] <= arr[right]) {

                temp.push_back(arr[left++]);
            }

            else {

                cnt += (mid - left + 1);

                temp.push_back(arr[right++]);
            }
        }

        while(left <= mid)
            temp.push_back(arr[left++]);

        while(right <= high)
            temp.push_back(arr[right++]);

        for(int i = low; i <= high; i++) {

            arr[i] =
            temp[i - low];
        }

        return cnt;
    }

    long long mergeSort(vector<int>& arr,
                        int low,
                        int high) {

        long long cnt = 0;

        if(low >= high)
            return cnt;

        int mid =
        (low + high) / 2;

        cnt += mergeSort(arr,
                         low,
                         mid);

        cnt += mergeSort(arr,
                         mid + 1,
                         high);

        cnt += merge(arr,
                     low,
                     mid,
                     high);

        return cnt;
    }

    long long inversionCount(vector<int>& arr) {

        return mergeSort(arr,
                         0,
                         arr.size() - 1);
    }
};