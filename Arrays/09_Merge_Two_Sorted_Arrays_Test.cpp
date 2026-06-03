#include <iostream>

using namespace std;

#include "09_Merge_Two_Sorted_Arrays.cpp"

int main() {

    long long arr1[] = {1,3,5,7};
    long long arr2[] = {0,2,6,8,9};

    int n = 4;
    int m = 5;

    Solution obj;

    obj.merge(arr1, arr2, n, m);

    cout << "Array 1: ";

    for(int i=0;i<n;i++)
        cout << arr1[i] << " ";

    cout << endl;

    cout << "Array 2: ";

    for(int i=0;i<m;i++)
        cout << arr2[i] << " ";

    return 0;
}