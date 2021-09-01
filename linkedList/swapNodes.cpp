/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };
You have been given a singly linked list of integers along with two integers, 'i,' and 'j.' 
Swap the nodes that are present at the 'i-th' and 'j-th' positions.
Note :
Remember, the nodes themselves must be swapped and not the datas.

No need to print the list, it has already been taken care. Only return the new head to the list.
*****************************************************************/
#include <bits/stdc++.h>

int length(Node * head) {
  if (head == NULL)
    return 0;

  int count = 0;
  Node * temp = head;
  while (temp != NULL) {
    count++;
    temp = temp -> next;
  }
  return count;

}
Node * swapNodes(Node * head, int i, int j) {
  //Write your code here
  //what shall be the base cases ? 
  //when 0 elements or  1 element ot i==j?
  if (head == NULL || head -> next == NULL || i == j)
    return head;

  int before = min(i, j);
  int last = max(i, j);
  int leng = length(head);
  if (last >= leng)
    return head;

  //main case
  //what we need ? , exact location and its predecessor
  //for both of the nodes

  Node * fatherOfBefore = head;
  Node * fatherOfLast = head;
  Node * lastptr = NULL;
  Node * beforeptr = NULL;

  int count = 1;
  Node * temp = head -> next;

  //first find the last Node , anyhow greater than 0!
  while (temp != NULL && count != last) {
    fatherOfLast = temp;
    temp = temp -> next;
    count++;
  }

  //node at j and its father present to us

  if (before == 0) {
    Node * afterLast = temp -> next;
    temp -> next = head -> next;
    fatherOfLast -> next = head;
    head -> next = afterLast;
    head = temp;
    //done
  } else {
    //get the positon of i , more than 0 atleast
    count = 1;
    Node * temp1 = head -> next;

    //first find the last Node , anyhow greater than 0!
    while (temp1 != NULL && count != before) {
      fatherOfBefore = temp1;
      temp1 = temp1 -> next;
      count++;
    }

    //node at i and its father present to us
    //swapping is required
    if (before + 1 != last) {
      Node * afterNext = temp -> next;
      temp -> next = temp1 -> next;
      fatherOfLast -> next = temp1;
      temp1 -> next = afterNext;
      fatherOfBefore -> next = temp;
    } else {
      Node * afterNext = temp -> next;
      temp -> next = temp1;
      fatherOfBefore -> next = temp;
      temp1 -> next = afterNext;
    }

  }
  return head;
}