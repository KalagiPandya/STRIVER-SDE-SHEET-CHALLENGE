#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "53_Palindrome_Partitioning.cpp"

int main() {

    string s = "aab";

    Solution obj;

    vector<vector<string>> ans =
    obj.partition(s);

    for(auto vec : ans) {

        cout << "{ ";

        for(auto str : vec) {

            cout << str << " ";
        }

        cout << "}" << endl;
    }

    return 0;
}