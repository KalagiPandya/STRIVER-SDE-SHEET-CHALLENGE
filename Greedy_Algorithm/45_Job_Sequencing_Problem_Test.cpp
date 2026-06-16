#include <iostream>
#include <vector>

using namespace std;

#include "45_Job_Sequencing_Problem.cpp"

int main() {

    Job arr[] =
    {
        {1,4,20},
        {2,1,10},
        {3,1,40},
        {4,1,30}
    };

    int n = 4;

    Solution obj;

    vector<int> ans =
    obj.JobScheduling(arr,n);

    cout << ans[0]
         << " "
         << ans[1];

    return 0;
}