#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(NULL) {}

    // Function to insert a new node at the end of the list
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to perform linear search and find the position of an element
    int linearSearch(int target) {
        Node* temp = head;
        int position = 1;

        while (temp != NULL) {
            if (temp->data == target) {
                return position;
            }
            temp = temp->next;
            position++;
        }

        return -1; // Element not found
    }
};

int main() {
    LinkedList linkedList;

    // Inserting elements into the linked list
    linkedList.insert(10);
    linkedList.insert(20);
    linkedList.insert(30);
    linkedList.insert(40);
    linkedList.insert(50);

    // Element to search
    int targetElement = 30;

    // Perform linear search
    int position = linkedList.linearSearch(targetElement);

    if (position != -1) {
        std::cout << "Element " << targetElement << " found at position: " << position << std::endl;
    } else {
        std::cout << "Element " << targetElement << " not found in the list." << std::endl;
    }

    return 0;
}

