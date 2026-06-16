#include <iostream>

using namespace std;

#include "46_Fractional_Knapsack.cpp"

int main() {

    Item arr[] =
    {
        {60,10},
        {100,20},
        {120,30}
    };

    int n = 3;

    int W = 50;

    Solution obj;

    cout <<
    obj.fractionalKnapsack(
        W,
        arr,
        n
    );

    return 0;
}