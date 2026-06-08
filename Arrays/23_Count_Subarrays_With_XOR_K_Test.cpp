#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#include "23_Count_Subarrays_With_XOR_K.cpp"

int main() {

    vector<int> arr =
    {4,2,2,6,4};

    Solution obj;

    cout << obj.solve(arr,6);

    return 0;
}