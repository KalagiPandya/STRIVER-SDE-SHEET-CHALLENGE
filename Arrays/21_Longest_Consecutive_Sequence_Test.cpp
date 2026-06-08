#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

#include "21_Longest_Consecutive_Sequence.cpp"

int main() {

    vector<int> nums =
    {100,4,200,1,3,2};

    Solution obj;

    cout <<
    obj.longestConsecutive(nums);

    return 0;
}