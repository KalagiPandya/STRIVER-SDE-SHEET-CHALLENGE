/*
=========================================================
Problem: Palindrome Linked List
Platform: LeetCode / Striver SDE Sheet
Approach: Reverse Second Half

Algorithm:
1. Find middle node.
2. Reverse second half.
3. Compare both halves.

Time Complexity: O(N)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    ListNode* reverse(ListNode* head) {

        ListNode* prev = NULL;

        while(head) {

            ListNode* nextNode =
            head->next;

            head->next = prev;

            prev = head;

            head = nextNode;
        }

        return prev;
    }

    bool isPalindrome(
        ListNode* head) {

        if(head == NULL ||
           head->next == NULL)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next &&
              fast->next->next) {

            slow = slow->next;

            fast = fast->next->next;
        }

        slow->next =
        reverse(slow->next);

        slow = slow->next;

        ListNode* dummy = head;

        while(slow) {

            if(dummy->val !=
               slow->val)
                return false;

            dummy = dummy->next;

            slow = slow->next;
        }

        return true;
    }
};