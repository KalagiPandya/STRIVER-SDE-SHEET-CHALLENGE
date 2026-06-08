#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#include "19_Two_Sum.cpp"

int main() {

    vector<int> nums = {2,7,11,15};

    Solution obj;

    vector<int> ans =
    obj.twoSum(nums, 9);

    cout << ans[0] << " "
         << ans[1];

    return 0;
}