/*
=========================================================
Problem: N Meetings In One Room
Platform: GFG / Striver SDE Sheet
Approach: Greedy

Algorithm:
1. Sort meetings by ending time.
2. Select non-overlapping meetings.

Time Complexity: O(N log N)
Space Complexity: O(N)
=========================================================
*/

#include <vector>
#include <algorithm>

using namespace std;

struct meeting {

    int start;
    int end;
    int pos;
};

class Solution {
public:

    static bool comp(
        meeting m1,
        meeting m2) {

        if(m1.end < m2.end)
            return true;

        else if(m1.end >
                m2.end)
            return false;

        return m1.pos <
               m2.pos;
    }

    int maxMeetings(
        int start[],
        int end[],
        int n) {

        meeting meet[n];

        for(int i=0;i<n;i++) {

            meet[i].start =
            start[i];

            meet[i].end =
            end[i];

            meet[i].pos =
            i+1;
        }

        sort(meet,
             meet+n,
             comp);

        int count = 1;

        int limit =
        meet[0].end;

        for(int i=1;i<n;i++) {

            if(meet[i].start >
               limit) {

                count++;

                limit =
                meet[i].end;
            }
        }

        return count;
    }
};