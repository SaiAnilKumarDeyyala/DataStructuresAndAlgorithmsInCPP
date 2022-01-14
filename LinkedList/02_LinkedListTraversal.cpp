// Function to Display the list
void Display(Node* head) {
    Node* temp = head;
    // iterate through the list until the end is reached
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
