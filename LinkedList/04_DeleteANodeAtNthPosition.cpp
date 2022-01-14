// Function to delete a node at Nth position
void DeleteAtNth(int n) {
    Node* LNode = head;  // LNode is the node before the nth node
    if(n==1) {    // If n is 1, then delete the head
        head = head->next;
        delete LNode;
        return;
    }

    for(int i=1;i<n-1;i++) {      // Traverse to the (n-1) th node
        if(LNode->next!=NULL) {
            LNode = LNode->next;
        }
        else {
            cout<<"\nInvalid position";
            return;
        }
    }

    Node* temp = LNode->next;     // temp is the node to be deleted i.e., nth node
    LNode->next = temp->next;     // Assigning the address of the next node of nth Node to n-1th Node next
    delete temp;
}
