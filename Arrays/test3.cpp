#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#include "03_Next_Permutation.cpp"

int main() {

    vector<int> nums = {1, 2, 3};

    Solution obj;

    obj.nextPermutation(nums);

    cout << "Next Permutation: ";

    for(auto num : nums) {

        cout << num << " ";
    }

    cout << endl;

    return 0;
}