#include <iostream>
#include <vector>

using namespace std;

#include "57_Sudoku_Solver.cpp"

int main() {

    vector<vector<char>> board =
    {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    Solution obj;

    obj.solveSudoku(board);

    for(auto row : board) {

        for(char c : row) {

            cout << c << " ";
        }

        cout << endl;
    }

    return 0;
}