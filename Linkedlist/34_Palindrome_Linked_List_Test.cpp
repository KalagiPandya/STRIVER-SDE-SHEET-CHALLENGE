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

#include "34_Palindrome_Linked_List.cpp"

int main() {

    ListNode* head =
    new ListNode(1);

    head->next =
    new ListNode(2);

    head->next->next =
    new ListNode(2);

    head->next->next->next =
    new ListNode(1);

    Solution obj;

    cout <<
    obj.isPalindrome(head);

    return 0;
}