#include <iostream>

using namespace std;

#include "43_N_Meetings_In_One_Room.cpp"

int main() {

    int start[] =
    {1,3,0,5,8,5};

    int end[] =
    {2,4,6,7,9,9};

    int n = 6;

    Solution obj;

    cout <<
    obj.maxMeetings(
        start,
        end,
        n
    );

    return 0;
}