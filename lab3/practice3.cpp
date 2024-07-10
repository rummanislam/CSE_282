#include <iostream>

// Node structure
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(NULL), next(NULL) {}
};

// DoublyLinkedList class
class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(NULL) {}

    // Function to insert a new node at the beginning of the list
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            // If the list is empty
            head = newNode;
        } else {
            // If the list is not empty
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Function to display the doubly linked list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;

    // Inserting elements into the doubly linked list
    dll.insertAtBeginning(30);
    dll.insertAtBeginning(20);
    dll.insertAtBeginning(10);

    // Displaying the doubly linked list
    std::cout << "Doubly Linked List after insertion at the beginning: ";
    dll.display();

    return 0;
}

