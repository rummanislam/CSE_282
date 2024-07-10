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

    // Function to insert a new node at the end of the list
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            // If the list is empty
            head = newNode;
        } else {
            // If the list is not empty
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    // Function to delete the first node of the list
    void deleteFirstNode() {
        if (head == NULL) {
            // If the list is already empty
            std::cout << "List is empty. Cannot delete the first node." << std::endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }

        delete temp; // Free the memory of the deleted node
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
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);

    // Displaying the original doubly linked list
    std::cout << "Original Doubly Linked List: ";
    dll.display();

    // Deleting the first node
    dll.deleteFirstNode();

    // Displaying the doubly linked list after deletion
    std::cout << "Doubly Linked List after deleting the first node: ";
    dll.display();

    return 0;
}

