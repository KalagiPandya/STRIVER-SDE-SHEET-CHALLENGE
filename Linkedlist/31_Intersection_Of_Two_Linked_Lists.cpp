/*
=========================================================
Problem: Intersection Of Two Linked Lists
Platform: LeetCode / Striver SDE Sheet
Approach: Two Pointer

Algorithm:
1. Traverse both lists.
2. When pointer reaches end,
   move it to other list.
3. Intersection point will match.

Time Complexity: O(N+M)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    ListNode *getIntersectionNode(
        ListNode *headA,
        ListNode *headB) {

        if(headA == NULL ||
           headB == NULL)
            return NULL;

        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b) {

            a = (a == NULL)
                ? headB
                : a->next;

            b = (b == NULL)
                ? headA
                : b->next;
        }

        return a;
    }
};