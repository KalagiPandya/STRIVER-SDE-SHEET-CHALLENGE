#include <iostream>
#include <vector>

using namespace std;

#include "55_Permutations.cpp"

int main() {

    vector<int> nums =
    {1,2,3};

    Solution obj;

    vector<vector<int>> ans =
    obj.permute(nums);

    for(auto v : ans) {

        cout << "{ ";

        for(int x : v) {

            cout << x << " ";
        }

        cout << "}" << endl;
    }

    return 0;
}