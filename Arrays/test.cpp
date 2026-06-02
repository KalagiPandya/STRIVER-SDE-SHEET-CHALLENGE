#include <iostream>
#include <vector>

using namespace std;

#include "01_Set_Matrix_Zeroes.cpp"

int main() {

    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,0,8},
        {9,10,11,12}
    };

    Solution obj;

    obj.setZeroes(matrix);

    for(auto row : matrix) {

        for(auto val : row)
            cout << val << " ";

        cout << endl;
    }

    return 0;
}