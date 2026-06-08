#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#include "20_Four_Sum.cpp"

int main() {

    vector<int> nums =
    {1,0,-1,0,-2,2};

    Solution obj;

    auto ans =
    obj.fourSum(nums,0);

    for(auto row : ans) {

        for(auto x : row)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}