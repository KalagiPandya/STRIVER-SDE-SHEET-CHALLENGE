#include <iostream>
#include <vector>

using namespace std;

#include "11_Repeat_And_Missing_Number.cpp"

int main() {

    vector<int> nums = {3,1,2,5,3};

    Solution obj;

    vector<int> ans =
    obj.repeatedNumber(nums);

    cout << "Repeating = "
         << ans[0] << endl;

    cout << "Missing = "
         << ans[1];

    return 0;
}