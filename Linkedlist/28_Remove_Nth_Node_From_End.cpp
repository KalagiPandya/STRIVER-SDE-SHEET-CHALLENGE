/*
=========================================================
Problem: Remove N-th Node From End
Platform: LeetCode / Striver SDE Sheet
Approach: Two Pointer

Algorithm:
1. Move fast pointer N steps.
2. Move slow and fast together.
3. Delete required node.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    ListNode* removeNthFromEnd(
        ListNode* head,
        int n) {

        ListNode* start =
        new ListNode(0);

        start->next = head;

        ListNode* fast = start;
        ListNode* slow = start;

        for(int i = 1; i <= n; i++) {

            fast = fast->next;
        }

        while(fast->next != NULL) {

            fast = fast->next;
            slow = slow->next;
        }

        slow->next =
        slow->next->next;

        return start->next;
    }
};