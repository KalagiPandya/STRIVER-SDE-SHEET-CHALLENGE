/*
=========================================================
Problem: Reverse Nodes In K Group
Platform: LeetCode / Striver SDE Sheet
Approach: Linked List Reversal

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    ListNode* reverseKGroup(
        ListNode* head,
        int k) {

        ListNode* curr = head;
        int count = 0;

        while(curr && count < k) {

            curr = curr->next;
            count++;
        }

        if(count == k) {

            curr =
            reverseKGroup(curr,k);

            while(count--) {

                ListNode* temp =
                head->next;

                head->next = curr;

                curr = head;

                head = temp;
            }

            head = curr;
        }

        return head;
    }
};