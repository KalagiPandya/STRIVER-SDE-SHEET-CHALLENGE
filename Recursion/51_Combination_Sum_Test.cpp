#include <iostream>
#include <vector>

using namespace std;

#include "51_Combination_Sum.cpp"

int main() {

    vector<int> candidates =
    {2,3,6,7};

    int target = 7;

    Solution obj;

    vector<vector<int>> ans =
    obj.combinationSum(
        candidates,
        target
    );

    for(auto v : ans) {

        cout << "{ ";

        for(int x : v) {

            cout << x << " ";
        }

        cout << "}" << endl;
    }

    return 0;
}