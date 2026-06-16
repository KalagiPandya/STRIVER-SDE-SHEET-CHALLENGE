#include <iostream>
#include <vector>

using namespace std;

#include "48_Assign_Cookies.cpp"

int main() {

    vector<int> g =
    {1,2};

    vector<int> s =
    {1,2,3};

    Solution obj;

    cout <<
    obj.findContentChildren(g,s);

    return 0;
}