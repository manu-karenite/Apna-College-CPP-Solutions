/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    mergeSort
    Node(int x) { data = x;  next = NULL; }
};

Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.

Example 1:

Input:
N = 5
value[]  = {3,5,2,4,1}
Output: 1 2 3 4 5
Explanation: After sorting the given
linked list, the resultant matrix
will be 1->2->3->4->5.


*/


//Function to sort the given linked list using Merge Sort.
Node * getFinalLL(Node * head1, Node * head2, Node * head, Node * tail) {
  //no ned of base cases for head1 and head2 , already filtered

  //first traversal on both
  Node * temp1 = head1;
  Node * temp2 = head2;

  while (temp1 != NULL && temp2 != NULL) {
    if (temp1 -> data < temp2 -> data) {
      //we need to create a node here
      Node * p = new Node(temp1 -> data);
      if (head == NULL) //then tail will be null
      {
        head = p;
        tail = p;
      } else {
        tail -> next = p;
        tail = p;
      }
      //increase the poibnter
      temp1 = temp1 -> next;

    } else {
      //when temp2 is smaller
      Node * p = new Node(temp2 -> data);
      if (head == NULL) //then tail will be null
      {
        head = p;
        tail = p;
      } else {
        tail -> next = p;
        tail = p;
      }
      //increase the poibnter
      temp2 = temp2 -> next;

    }
  }

  //now there are chances any one of them can be empty
  //so considering that
  while (temp1 != NULL) {
    Node * p = new Node(temp1 -> data);
    tail -> next = p;
    tail = p;
    temp1 = temp1 -> next;
  }

  while (temp2 != NULL) {
    Node * p = new Node(temp2 -> data);
    tail -> next = p;
    tail = p;
    temp2 = temp2 -> next;
  }
  return head;

}

Node * mergeSort(Node * head) {
  //Write your code here
  if (head == NULL || head -> next == NULL)
    return head;

  //otherwise two definitely exists
  //find the midnode first

  Node * slow = head;
  Node * fast = head -> next;

  while (fast != NULL && fast -> next != NULL) {
    slow = slow -> next;
    fast = fast -> next;

  }

  //npow slow points /stands on the mid portion
  //make 2 separate ll
  Node * nextAfterSlow = slow -> next;
  slow -> next = NULL;
  //LL broken    
  Node * temp = head;

  Node * front = mergeSort(temp); //last null placed
  Node * last = mergeSort(nextAfterSlow); //last null already present

  //thsi two bring the LL after sorting

  //now we write the function for merge 2 sorted LL
  if ((front == NULL && last == NULL))
    return NULL;
  if (front == NULL && last != NULL)
    return last; //bcoz no elements are there in 1st LL
  if (front != NULL && last == NULL)
    return front;

  Node * newHead = NULL;
  Node * tail = NULL;
  newHead = getFinalLL(front, last, newHead, tail);
  return newHead;
}