#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* getNewNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

Node* Insert(Node* root,int data){
    if(root==NULL){
        root = getNewNode(data);
    }
    else if(data < root->data){
        root->left = Insert(root->left,data);
    }
    else {
        root->right = Insert(root->right,data);
    }
    return root;
}

int main() {
    Node* root = NULL;
    root = Insert(root,34);
    root = Insert(root,454);
    root = Insert(root,10);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    return 0;
}


