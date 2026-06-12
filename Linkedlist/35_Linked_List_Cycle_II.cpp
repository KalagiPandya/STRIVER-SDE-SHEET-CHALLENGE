/*
=========================================================
Problem: Linked List Cycle II
Platform: LeetCode / Striver SDE Sheet
Approach: Floyd Cycle Detection

Algorithm:
1. Detect cycle.
2. Move one pointer to head.
3. Move both one step.
4. Meeting point is cycle start.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    ListNode *detectCycle(
        ListNode *head) {

        if(head == NULL ||
           head->next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast &&
              fast->next) {

            slow = slow->next;

            fast = fast->next->next;

            if(slow == fast) {

                slow = head;

                while(slow != fast) {

                    slow = slow->next;

                    fast = fast->next;
                }

                return slow;
            }
        }

        return NULL;
    }
};