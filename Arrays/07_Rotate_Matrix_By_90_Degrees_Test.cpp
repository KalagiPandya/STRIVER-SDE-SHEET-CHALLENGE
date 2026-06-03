#include <iostream>
#include <vector>

using namespace std;

#include "07_Rotate_Matrix_By_90_Degrees.cpp"

int main() {

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    Solution obj;

    obj.rotate(matrix);

    for(auto row : matrix) {

        for(auto x : row)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}