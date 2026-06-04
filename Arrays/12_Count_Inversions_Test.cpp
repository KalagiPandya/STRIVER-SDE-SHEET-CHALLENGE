#include <iostream>
#include <vector>

using namespace std;

#include "12_Count_Inversions.cpp"

int main() {

    vector<int> arr = {5,3,2,4,1};

    Solution obj;

    cout << "Inversions = "
         << obj.inversionCount(arr);

    return 0;
}