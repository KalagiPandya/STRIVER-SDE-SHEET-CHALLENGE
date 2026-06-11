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

#include "32_Detect_Cycle_In_Linked_List.cpp"

int main() {

    ListNode* head =
    new ListNode(1);

    head->next =
    new ListNode(2);

    head->next->next =
    new ListNode(3);

    head->next->next->next =
    head;

    Solution obj;

    cout <<
    obj.hasCycle(head);

    return 0;
}