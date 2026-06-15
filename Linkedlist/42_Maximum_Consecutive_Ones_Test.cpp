#include <iostream>
#include <vector>

using namespace std;

#include "42_Maximum_Consecutive_Ones.cpp"

int main() {

    vector<int> nums =
    {1,1,0,1,1,1};

    Solution obj;

    cout <<
    obj.findMaxConsecutiveOnes(nums);

    return 0;
}