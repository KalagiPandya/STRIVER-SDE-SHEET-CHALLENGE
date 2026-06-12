#include <iostream>

using namespace std;

struct ListNode {

    int val;
    ListNode* next;

    ListNode(int x) {

        val = x;
        next = NULL;
    }
};

#include "35_Linked_List_Cycle_II.cpp"

int main() {

    ListNode* head =
    new ListNode(3);

    head->next =
    new ListNode(2);

    head->next->next =
    new ListNode(0);

    head->next->next->next =
    new ListNode(-4);

    head->next->next->next->next =
    head->next;

    Solution obj;

    ListNode* ans =
    obj.detectCycle(head);

    cout << ans->val;

    return 0;
}