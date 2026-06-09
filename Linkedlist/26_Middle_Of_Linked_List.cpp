/*
=========================================================
Problem: Middle Of Linked List
Platform: LeetCode / Striver SDE Sheet
Approach: Slow and Fast Pointer

Algorithm:
1. Slow moves 1 step.
2. Fast moves 2 steps.
3. When fast reaches end,
   slow reaches middle.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    ListNode* middleNode(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL &&
              fast->next != NULL) {

            slow = slow->next;

            fast = fast->next->next;
        }

        return slow;
    }
};