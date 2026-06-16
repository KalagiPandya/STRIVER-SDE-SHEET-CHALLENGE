#include <iostream>

using namespace std;

#include "44_Minimum_Number_Of_Platforms.cpp"

int main() {

    int arr[] =
    {900,940,950,1100,1500,1800};

    int dep[] =
    {910,1200,1120,1130,1900,2000};

    int n = 6;

    Solution obj;

    cout <<
    obj.findPlatform(
        arr,
        dep,
        n
    );

    return 0;
}