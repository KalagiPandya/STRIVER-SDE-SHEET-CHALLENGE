#include <iostream>

using namespace std;

#include "02_Pascals_Triangle.cpp"

int main() {

    int row = 5;
    int col = 3;

    Solution obj;

    cout << obj.pascalTriangle(row, col);

    return 0;
}