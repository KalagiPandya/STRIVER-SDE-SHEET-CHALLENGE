/*
=========================================================
Problem: Fractional Knapsack
Platform: GFG / Striver SDE Sheet
Approach: Greedy

Algorithm:
1. Sort items by value/weight ratio.
2. Pick highest ratio first.
3. Take fraction if needed.

Time Complexity: O(N log N)
Space Complexity: O(1)
=========================================================
*/

#include <algorithm>

using namespace std;

struct Item {

    int value;
    int weight;
};

class Solution {
public:

    static bool comp(
        Item a,
        Item b) {

        double r1 =
        (double)a.value /
        (double)a.weight;

        double r2 =
        (double)b.value /
        (double)b.weight;

        return r1 > r2;
    }

    double fractionalKnapsack(
        int W,
        Item arr[],
        int n) {

        sort(arr,
             arr+n,
             comp);

        double finalValue = 0.0;

        for(int i = 0;
            i < n;
            i++) {

            if(arr[i].weight <= W) {

                finalValue +=
                arr[i].value;

                W -= arr[i].weight;
            }

            else {

                finalValue +=
                ((double)arr[i].value /
                (double)arr[i].weight)
                * W;

                break;
            }
        }

        return finalValue;
    }
};