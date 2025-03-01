#include<iostream>

struct Node {
    int data;
    Node *nextNode;
};

int main() {
    int LINKED_LIST_DEPTH;

    std::cin >> LINKED_LIST_DEPTH;

    Node headNode;
    headNode.data = 1;
    headNode.nextNode = nullptr;

    Node *tempNode = &headNode;

    std::cout << "-------------" << std::endl;

    for(int i = 2; i <= LINKED_LIST_DEPTH; i++) {
        Node *newNode = new Node(); // allocate memory for newNode
        newNode -> data = i;
        newNode -> nextNode = nullptr;

        tempNode -> nextNode = newNode;

        Node *newTempNode = tempNode -> nextNode; 

        tempNode = newTempNode;
    }

    std::cout << "Linked List Data: " << std::endl;
    std::cout << "-------------" << std::endl;

    Node *targetNode = &headNode;

    while(true) {
        std::cout << targetNode -> data << std::endl;

        Node *tempNode = targetNode -> nextNode;


        if(tempNode == nullptr) {
            break;
        } else {
            targetNode = tempNode;
        }
    }

    return 0;
}