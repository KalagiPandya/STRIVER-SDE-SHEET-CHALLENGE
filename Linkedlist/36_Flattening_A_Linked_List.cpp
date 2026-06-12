/*
=========================================================
Problem: Flattening A Linked List
Platform: GFG / Striver SDE Sheet
Approach: Merge Linked Lists

Time Complexity: O(N*N*M)
Space Complexity: O(1)
=========================================================
*/

class Node {

public:

    int data;
    Node* next;
    Node* bottom;

    Node(int x) {

        data = x;
        next = NULL;
        bottom = NULL;
    }
};

Node* merge(Node* a,
            Node* b) {

    Node dummy(0);

    Node* temp = &dummy;

    while(a && b) {

        if(a->data < b->data) {

            temp->bottom = a;

            temp = temp->bottom;

            a = a->bottom;
        }

        else {

            temp->bottom = b;

            temp = temp->bottom;

            b = b->bottom;
        }
    }

    if(a)
        temp->bottom = a;

    else
        temp->bottom = b;

    return dummy.bottom;
}

Node* flatten(Node* root) {

    if(root == NULL ||
       root->next == NULL)
        return root;

    root->next =
    flatten(root->next);

    root =
    merge(root,root->next);

    return root;
}