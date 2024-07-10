#include <iostream>
#include<bits/stdc++.h>

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

    // Function to insert a new node at the kth position in the list
    void insertAtK(int val, int k) {
        if (k < 1) {
            std::cout << "Invalid position. Position should be greater than or equal to 1." << std::endl;
            return;
        }

        Node* newNode = new Node(val);

        if (k == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < k - 1 && temp != NULL; ++i) {
            temp = temp->next;
        }

        if (temp == NULL) {
            std::cout << "Invalid position. Position exceeds the size of the list." << std::endl;
            delete newNode; // Free the allocated memory for the new node
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Function to display the linked list
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
    LinkedList linkedList;

    // Inserting elements into the linked list
    linkedList.insert(10);
    linkedList.insert(20);
    linkedList.insert(40);
    linkedList.insert(50);

    // Displaying the original linked list
    std::cout << "Original Linked List: ";
    linkedList.display();

    // Element and position to insert
    int elementToInsert = 30;
    int positionToInsert = 3;

    // Inserting element at kth position
    linkedList.insertAtK(elementToInsert, positionToInsert);

    // Displaying the modified linked list
    std::cout << "Linked List after insertion: ";
    linkedList.display();

    return 0;
}

