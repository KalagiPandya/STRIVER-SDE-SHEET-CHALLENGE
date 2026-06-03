#include <iostream>
#include <vector>

using namespace std;

#include "05_Sort_Colors.cpp"

int main() {

    vector<int> nums = {2,0,2,1,1,0};

    Solution obj;

    obj.sortColors(nums);

    for(int x : nums)
        cout << x << " ";

    return 0;
}