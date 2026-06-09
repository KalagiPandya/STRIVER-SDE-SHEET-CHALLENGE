/*
=========================================================
Problem: Reverse Linked List
Platform: LeetCode / Striver SDE Sheet
Approach: Iterative

Algorithm:
1. Maintain prev, current, next.
2. Reverse links one by one.
3. Return prev.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {

            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;

            curr = nextNode;
        }

        return prev;
    }
};