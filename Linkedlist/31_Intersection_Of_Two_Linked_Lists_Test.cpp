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

#include "31_Intersection_Of_Two_Linked_Lists.cpp"

int main() {

    ListNode* common =
    new ListNode(8);

    common->next =
    new ListNode(10);

    ListNode* headA =
    new ListNode(3);

    headA->next =
    new ListNode(6);

    headA->next->next =
    common;

    ListNode* headB =
    new ListNode(4);

    headB->next = common;

    Solution obj;

    ListNode* ans =
    obj.getIntersectionNode(headA,headB);

    cout << ans->val;

    return 0;
}