#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


Node* head = NULL;

// Function to create a new node
Node* getNewNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to insert a node at the beginning
void InsertAtHead(int data){
    Node* newNode = getNewNode(data);
    if(head==NULL){
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}


// Function to insert a node at the end
void InsertAtEnd(int data){
    Node* newNode = getNewNode(data);
    if(head==NULL) {
        head = newNode;
    }
    else {
        Node* lNode = head;
        // Traverse to the last node
        while(lNode->next!=NULL){
            lNode = lNode->next;
        }
        lNode->next = newNode;
    }
}

// Function to Display the list
void Display(Node* head) {
    Node* temp = head;
    // iterate through the list until the end is reached
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
    InsertAtHead(10);
    InsertAtHead(20);
    InsertAtHead(30);
    InsertAtHead(40);
    InsertAtEnd(50);
    InsertAtEnd(60);
    Display(head);
    return 0;
}
