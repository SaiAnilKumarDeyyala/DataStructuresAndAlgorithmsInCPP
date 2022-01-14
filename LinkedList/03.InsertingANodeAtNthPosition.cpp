// Function to insert a node at Nth position
void InsertAtNth(int data,int n){
    Node* newNode = getNewNode(data);
    Node* LNode = head;  // LNode is the node before the nth node

    if(n==1) {           // If n is 1, then insert at the head
        newNode->next = head;
        head = newNode;
        return;
    }

    for(int i=1;i<n-1;i++) {    // Traverse to the nth node
        if(LNode->next!=NULL) { 
            LNode = LNode->next;
        }
        else {                  // If n is greater than the number of nodes in the list
            cout<<"\nInvalid position";
            return;
        }
    }
    newNode->next = LNode->next;  // Nth Node address is stored in newNode->next
    LNode->next = newNode;       //  newNode is inserted after LNode
}
