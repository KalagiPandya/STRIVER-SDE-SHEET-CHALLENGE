#include <iostream>
#include <vector>

using namespace std;

#include "44_Find_All_Duplicates_In_Array.cpp"

int main() {

    vector<int> nums =
    {4,3,2,7,8,2,3,1};

    Solution obj;

    vector<int> ans =
    obj.findDuplicates(nums);

    for(int x : ans) {

        cout << x << " ";
    }

    return 0;
}