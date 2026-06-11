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

#include "30_Delete_Node_In_Linked_List.cpp"

void printList(ListNode* head) {

    while(head) {

        cout << head->val << " ";

        head = head->next;
    }
}

int main() {

    ListNode* head =
    new ListNode(4);

    head->next =
    new ListNode(5);

    head->next->next =
    new ListNode(1);

    head->next->next->next =
    new ListNode(9);

    Solution obj;

    obj.deleteNode(head->next);

    printList(head);

    return 0;
}