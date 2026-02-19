#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

int main() {
    // Creating nodes manually
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assigning data
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Print linked list
    cout << "Linked List: ";
    printList(head);

    return 0;
}
