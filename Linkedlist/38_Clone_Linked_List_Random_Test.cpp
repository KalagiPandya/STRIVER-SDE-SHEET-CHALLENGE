#include <iostream>
using namespace std;

#include "38_Clone_Linked_List_Random.cpp"

void printList(Node* head) {

    Node* temp = head;

    while (temp) {
        cout << "Node: " << temp->data;

        if (temp->random)
            cout << " Random: " << temp->random->data;
        else
            cout << " Random: NULL";

        cout << endl;
        temp = temp->next;
    }
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Random links
    head->random = head->next->next; // 1->3
    head->next->random = head;       // 2->1
    head->next->next->random = head->next; // 3->2

    Node* clone = copyRandomList(head);

    cout << "Original List:\n";
    printList(head);

    cout << "\nCloned List:\n";
    printList(clone);

    return 0;
}