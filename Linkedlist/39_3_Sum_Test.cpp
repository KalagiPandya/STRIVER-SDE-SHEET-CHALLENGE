#include <iostream>
using namespace std;

#include "39_3_Sum.cpp"

int main() {

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> res = threeSum(nums);

    for (auto triplet : res) {
        cout << "[ ";
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}