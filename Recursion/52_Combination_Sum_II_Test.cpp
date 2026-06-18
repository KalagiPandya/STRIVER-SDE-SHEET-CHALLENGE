#include <iostream>
#include <vector>

using namespace std;

#include "52_Combination_Sum_II.cpp"

int main() {

    vector<int> candidates =
    {10,1,2,7,6,1,5};

    int target = 8;

    Solution obj;

    vector<vector<int>> ans =
    obj.combinationSum2(
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