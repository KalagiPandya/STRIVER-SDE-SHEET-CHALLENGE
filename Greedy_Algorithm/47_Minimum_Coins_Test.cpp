#include <iostream>
#include <vector>

using namespace std;

#include "47_Minimum_Coins.cpp"

int main() {

    Solution obj;

    vector<int> ans =
    obj.minPartition(49);

    for(int x : ans) {

        cout << x << " ";
    }

    return 0;
}