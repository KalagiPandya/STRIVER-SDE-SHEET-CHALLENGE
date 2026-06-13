/*
=========================================================
Problem: Rotate Linked List
Approach: Find length, go to (n-k)th node, break list
=========================================================
*/

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* rotateRight(Node* head, int k) {

    if (!head || !head->next || k == 0)
        return head;

    Node* temp = head;
    int n = 1;

    while (temp->next) {
        temp = temp->next;
        n++;
    }

    k = k % n;
    if (k == 0) return head;

    int steps = n - k;
    Node* newTail = head;

    for (int i = 1; i < steps; i++) {
        newTail = newTail->next;
    }

    Node* newHead = newTail->next;
    newTail->next = NULL;

    temp->next = head;

    return newHead;
}