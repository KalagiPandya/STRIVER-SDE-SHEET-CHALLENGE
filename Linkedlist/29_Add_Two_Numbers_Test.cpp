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

#include "29_Add_Two_Numbers.cpp"

void printList(ListNode* head) {

    while(head) {

        cout << head->val << " ";

        head = head->next;
    }
}

int main() {

    ListNode* l1 =
    new ListNode(2);

    l1->next =
    new ListNode(4);

    l1->next->next =
    new ListNode(3);

    ListNode* l2 =
    new ListNode(5);

    l2->next =
    new ListNode(6);

    l2->next->next =
    new ListNode(4);

    Solution obj;

    ListNode* ans =
    obj.addTwoNumbers(l1,l2);

    printList(ans);

    return 0;
}