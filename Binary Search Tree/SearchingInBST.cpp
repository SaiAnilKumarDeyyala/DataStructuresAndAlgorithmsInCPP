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

bool Search(Node* root, int target){
    if(root==NULL) return false;
    else if(root->data==target) {
        return true;
    }
    else if(target<=root->data){
        return Search(root->left,target);
    }
    else {
        return Search(root->right,target);
    }
}
int main() {
    Node* root = NULL;
    root = Insert(root,34);
    root = Insert(root,454);
    root = Insert(root,10);
    root = Insert(root,54);
    root = Insert(root,543);
    root = Insert(root,86);
    int number;
    cout<<"Enter a number to search: ";
    cin>>number;
    if(Search(root,number)) {
        cout<<"Found";
    }
    else {
        cout<<"Not Found";
    }
    return 0;
}


