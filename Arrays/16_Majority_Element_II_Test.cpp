#include <iostream>
#include <vector>

using namespace std;

#include "16_Majority_Element_II.cpp"

int main() {

    vector<int> nums = {3,2,3};

    Solution obj;

    vector<int> ans =
    obj.majorityElement(nums);

    for(int x : ans)
        cout << x << " ";

    return 0;
}