/*
=========================================================
Problem: Merge Two Sorted Lists
Platform: LeetCode / Striver SDE Sheet
Approach: Iterative

Algorithm:
1. Use dummy node.
2. Compare both lists.
3. Attach smaller node.
4. Append remaining nodes.

Time Complexity: O(N+M)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    ListNode* mergeTwoLists(
        ListNode* list1,
        ListNode* list2) {

        ListNode dummy(-1);

        ListNode* temp = &dummy;

        while(list1 && list2) {

            if(list1->val <= list2->val) {

                temp->next = list1;

                list1 = list1->next;
            }

            else {

                temp->next = list2;

                list2 = list2->next;
            }

            temp = temp->next;
        }

        if(list1)
            temp->next = list1;

        if(list2)
            temp->next = list2;

        return dummy.next;
    }
};