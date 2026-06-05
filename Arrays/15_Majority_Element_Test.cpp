#include <iostream>
#include <vector>

using namespace std;

#include "15_Majority_Element.cpp"

int main() {

    vector<int> nums = {2,2,1,1,1,2,2};

    Solution obj;

    cout << obj.majorityElement(nums);

    return 0;
}