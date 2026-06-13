/*
=========================================================
Problem: Clone Linked List with Next & Random Pointer
Approach: Insert copy nodes, assign random, separate
=========================================================
*/

class Node {
public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {

    if (!head) return NULL;

    Node* temp = head;

    // Step 1: Insert copy nodes
    while (temp) {
        Node* copy = new Node(temp->data);
        copy->next = temp->next;
        temp->next = copy;
        temp = copy->next;
    }

    // Step 2: Assign random pointers
    temp = head;

    while (temp) {
        if (temp->random)
            temp->next->random = temp->random->next;

        temp = temp->next->next;
    }

    // Step 3: Separate lists
    temp = head;
    Node* dummy = new Node(0);
    Node* copyTail = dummy;

    while (temp) {
        Node* copy = temp->next;
        temp->next = copy->next;

        copyTail->next = copy;
        copyTail = copy;

        temp = temp->next;
    }

    return dummy->next;
}