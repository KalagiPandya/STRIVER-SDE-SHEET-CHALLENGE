#include <iostream>
#include <vector>

using namespace std;

#include "13_Search_In_A_2D_Matrix.cpp"

int main() {

    vector<vector<int>> matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    Solution obj;

    cout << obj.searchMatrix(matrix, 3);

    return 0;
}