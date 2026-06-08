#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#include "22_Largest_Subarray_With_Sum_0.cpp"

int main() {

    vector<int> arr =
    {15,-2,2,-8,1,7,10,23};

    Solution obj;

    cout << obj.maxLen(arr,
                       arr.size());

    return 0;
}