#include <iostream>
#include <vector>

using namespace std;

#include "18_Reverse_Pairs.cpp"

int main() {

    vector<int> nums = {1,3,2,3,1};

    Solution obj;

    cout << obj.reversePairs(nums);

    return 0;
}