#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "56_N_Queens.cpp"

int main() {

    Solution obj;

    vector<vector<string>> ans =
    obj.solveNQueens(4);

    for(auto board : ans) {

        cout << endl;

        for(auto row : board) {

            cout << row << endl;
        }

        cout << endl;
    }

    return 0;
}