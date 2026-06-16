/*
=========================================================
Problem: Job Sequencing Problem
Platform: GFG / Striver SDE Sheet
Approach: Greedy

Time Complexity: O(N log N)
Space Complexity: O(N)
=========================================================
*/

#include <vector>
#include <algorithm>

using namespace std;

struct Job {

    int id;
    int dead;
    int profit;
};

class Solution {
public:

    static bool comp(
        Job a,
        Job b) {

        return a.profit >
               b.profit;
    }

    vector<int> JobScheduling(
        Job arr[],
        int n) {

        sort(arr,
             arr+n,
             comp);

        int maxi = arr[0].dead;

        for(int i=1;i<n;i++) {

            maxi =
            max(maxi,
                arr[i].dead);
        }

        vector<int> slot(
            maxi+1,
            -1
        );

        int countJobs = 0;
        int jobProfit = 0;

        for(int i=0;i<n;i++) {

            for(int j=arr[i].dead;
                j>0;
                j--) {

                if(slot[j] == -1) {

                    slot[j] = i;

                    countJobs++;

                    jobProfit +=
                    arr[i].profit;

                    break;
                }
            }
        }

        return {countJobs,
                jobProfit};
    }
};