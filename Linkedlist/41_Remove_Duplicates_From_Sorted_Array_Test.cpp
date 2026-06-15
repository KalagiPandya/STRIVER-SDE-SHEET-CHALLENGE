#include <iostream>
#include <vector>

using namespace std;

#include "41_Remove_Duplicates_From_Sorted_Array.cpp"

int main() {

    vector<int> nums =
    {1,1,2,2,3,4,4};

    Solution obj;

    int k =
    obj.removeDuplicates(nums);

    cout << k << endl;

    for(int i=0;i<k;i++) {

        cout << nums[i] << " ";
    }

    return 0;
}