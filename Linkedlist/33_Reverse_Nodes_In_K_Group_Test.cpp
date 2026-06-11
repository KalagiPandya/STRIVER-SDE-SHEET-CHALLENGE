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

#include "33_Reverse_Nodes_In_K_Group.cpp"

void printList(ListNode* head) {

    while(head) {

        cout << head->val << " ";

        head = head->next;
    }
}

int main() {

    ListNode* head =
    new ListNode(1);

    head->next =
    new ListNode(2);

    head->next->next =
    new ListNode(3);

    head->next->next->next =
    new ListNode(4);

    head->next->next->next->next =
    new ListNode(5);

    Solution obj;

    head =
    obj.reverseKGroup(head,2);

    printList(head);

    return 0;
}