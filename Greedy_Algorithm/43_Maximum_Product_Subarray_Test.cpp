#include <iostream>
#include <vector>

using namespace std;

#include "43_Maximum_Product_Subarray.cpp"

int main() {

    vector<int> nums =
    {2,3,-2,4};

    Solution obj;

    cout <<
    obj.maxProduct(nums);

    return 0;
}