#include <iostream>
#include <vector>

using namespace std;

#include "49_Subset_Sums.cpp"

int main() {

    vector<int> arr =
    {3,1,2};

    Solution obj;

    vector<int> ans =
    obj.subsetSums(arr,3);

    for(int x : ans) {

        cout << x << " ";
    }

    return 0;
}