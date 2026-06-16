#include <iostream>
#include <vector>

using namespace std;

#include "50_Subsets_II.cpp"

int main() {

    vector<int> nums =
    {1,2,2};

    Solution obj;

    vector<vector<int>> ans =
    obj.subsetsWithDup(nums);

    for(auto subset : ans) {

        cout << "{ ";

        for(int x : subset) {

            cout << x << " ";
        }

        cout << "} ";
    }

    return 0;
}