/*
=========================================================
Problem: Detect Cycle In Linked List
Platform: LeetCode / Striver SDE Sheet
Approach: Floyd Cycle Detection

Algorithm:
1. Slow moves 1 step.
2. Fast moves 2 steps.
3. If they meet -> cycle exists.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    bool hasCycle(ListNode *head) {

        if(head == NULL ||
           head->next == NULL)
            return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast &&
              fast->next) {

            slow = slow->next;

            fast = fast->next->next;

            if(slow == fast)
                return true;
        }

        return false;
    }
};