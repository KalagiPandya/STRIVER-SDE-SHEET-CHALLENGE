#include <iostream>
#include <vector>

using namespace std;

#include "08_Merge_Overlapping_Intervals.cpp"

int main() {

    vector<vector<int>> intervals = {
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };

    Solution obj;

    auto ans = obj.merge(intervals);

    for(auto row : ans) {

        cout << "[" << row[0]
             << "," << row[1] << "] ";
    }

    return 0;
}