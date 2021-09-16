/*
Reverse a Doubly Linked List 
Easy Accuracy: 51.41% Submissions: 35029 Points: 2
Given a doubly linked list of n elements. The task is to reverse the doubly linked list.

Example 1:

Input:
LinkedList: 3 <--> 4 <--> 5
Output: 5 4 3
Example 2:

Input:
LinkedList: 75 <--> 122 <--> 59 <--> 196
Output: 196 59 122 75
*/

Node * reverseDLL(Node * head) {
  //Your code here
  if (head == NULL || head -> next == NULL)
    return head;
  Node * recursedWork = reverseDLL(head -> next);

  Node * toAttach = head;

  head -> next = NULL;
  head -> prev = NULL;
  head = recursedWork;

  recursedWork -> prev = NULL;

  Node * temp = head;
  while (temp -> next != NULL) {
    temp = temp -> next;

  }
  //stand on thge last node
  temp -> next = toAttach;
  toAttach -> prev = temp;
  return head;
}
