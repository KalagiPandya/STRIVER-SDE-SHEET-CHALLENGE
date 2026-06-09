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

#include "27_Merge_Two_Sorted_Lists.cpp"

void printList(ListNode* head) {

    while(head) {

        cout << head->val << " ";

        head = head->next;
    }
}

int main() {

    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    Solution obj;

    ListNode* ans =
    obj.mergeTwoLists(list1, list2);

    printList(ans);

    return 0;
}