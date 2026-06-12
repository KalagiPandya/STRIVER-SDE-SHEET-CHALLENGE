#include <iostream>

using namespace std;

#include "36_Flattening_A_Linked_List.cpp"

void printList(Node* head) {

    while(head) {

        cout << head->data << " ";

        head = head->bottom;
    }
}

int main() {

    Node* head = new Node(5);

    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);

    head->next = new Node(10);

    head->next->bottom =
    new Node(20);

    head = flatten(head);

    printList(head);

    return 0;
}