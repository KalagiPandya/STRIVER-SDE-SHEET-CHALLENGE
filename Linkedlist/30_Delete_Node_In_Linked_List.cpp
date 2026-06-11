/*
=========================================================
Problem: Delete Node In Linked List
Platform: LeetCode / Striver SDE Sheet
Approach: Copy Next Node

Algorithm:
1. Copy next node value.
2. Skip next node.

Time Complexity: O(1)
Space Complexity: O(1)
=========================================================
*/

class Solution {
public:

    void deleteNode(ListNode* node) {

        node->val =
        node->next->val;

        node->next =
        node->next->next;
    }
};