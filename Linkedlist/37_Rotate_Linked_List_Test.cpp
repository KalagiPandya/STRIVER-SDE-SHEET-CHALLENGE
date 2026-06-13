#include <iostream>
using namespace std;

#include "37_Rotate_Linked_List.cpp"

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;

    head = rotateRight(head, k);

    printList(head);

    return 0;
}