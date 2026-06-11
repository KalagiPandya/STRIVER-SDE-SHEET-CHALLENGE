/*
=========================================================
Problem: Add Two Numbers
Platform: LeetCode / Striver SDE Sheet
Approach: Simulation

Algorithm:
1. Traverse both lists.
2. Add digits + carry.
3. Create new node.
4. Return answer list.

Time Complexity: O(max(N,M))
Space Complexity: O(max(N,M))
=========================================================
*/

class Solution {
public:

    ListNode* addTwoNumbers(
        ListNode* l1,
        ListNode* l2) {

        ListNode dummy(0);

        ListNode* temp = &dummy;

        int carry = 0;

        while(l1 || l2 || carry) {

            int sum = 0;

            if(l1) {

                sum += l1->val;
                l1 = l1->next;
            }

            if(l2) {

                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;

            carry = sum / 10;

            ListNode* node =
            new ListNode(sum % 10);

            temp->next = node;

            temp = temp->next;
        }

        return dummy.next;
    }
};