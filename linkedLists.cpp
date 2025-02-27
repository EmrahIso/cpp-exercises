#include <iostream>
#include <algorithm>

struct Node {
    int data;
    Node *nextNode;
};

int main() {

    Node *pHeadNode;
    pHeadNode = nullptr;

    Node *temp = new Node();

    temp -> data = 2;
    temp -> nextNode = nullptr;

    pHeadNode = temp;

    temp = new Node();

    temp -> data = 4;
    temp -> nextNode = nullptr;

    Node *temp1 = pHeadNode;

    while(pHeadNode -> nextNode != nullptr) {
        temp1 = pHeadNode -> nextNode;
    }
    
    temp1 -> nextNode = temp;

    return 0;
}