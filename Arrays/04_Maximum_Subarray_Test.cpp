#include <iostream>
#include <vector>

using namespace std;

#include "04_Maximum_Subarray.cpp"

int main() {

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    Solution obj;

    cout << "Maximum Sum = "
         << obj.maxSubArray(nums);

    return 0;
}