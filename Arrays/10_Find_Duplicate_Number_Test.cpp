#include <iostream>
#include <vector>

using namespace std;

#include "10_Find_Duplicate_Number.cpp"

int main() {

    vector<int> nums = {1,3,4,2,2};

    Solution obj;

    cout << "Duplicate Number = "
         << obj.findDuplicate(nums);

    return 0;
}