
// Circular Linked List Traversal
// Basic Accuracy: 50.5% Submissions: 15167 Points: 1

// Given a circular linked list, your task is to complete the method printList() that prints the linked list.

// Input:
// The printList function takes a single argument as input the reference pointer to the head of the linked list.
// There are multiple test cases and for each test the function will be called separately. 

void printList(struct Node * head) {
  // code here
  Node * temp = head;
  while (temp -> next != head) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  //last node
  cout << temp -> data;
}
