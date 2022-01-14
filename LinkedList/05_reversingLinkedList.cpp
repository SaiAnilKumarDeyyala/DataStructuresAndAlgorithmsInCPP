// Function to reverse the LinkedList using iterative method
// Time Complexity: O(n), Space Complexity: O(1)
Node* reverseLinkedList(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next;

    while(curr!=NULL) {     
        next = curr->next;    // Storing the address of the next node in next
        curr->next = prev;    // updating the next filed of current node to address of previous node
        prev = curr;          // Updating the previous node to current node
        curr = next;          // Updating the current node to next node
    }
    head = prev;       // Updating the head to the previous node i.e., the last node
    return head;
}


// Function to reverse the LinkedList using recursion
// Time Complexity: O(n), Space Complexity: O(1)
void reverseLList(Node* p) {
    if(p->next==NULL) {    // base condition
        head = p;          // assigning head to the last Node
        return;
    }
    reverseLList(p->next);  
    p->next->next = p;     // assigning the next filed to the next node to current node in recursive call
    p->next = NULL;        // assigning the next filed of current node to NULL
}
