// Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.
// Example 1:

// Input:
// LinkList1 = 3->6->9->common
// LinkList2 = 10->common
// common = 15->30->NULL
// Output: 15

int leng(Node * head) {
  int count = 0;
  Node * temp = head;
  while (temp != NULL) {
    count++;
    temp = temp -> next;
  }
  return count;
}
int intersectPoint(Node * head1, Node * head2) {
  // Your Code Here
  Node * a = head1;
  Node * b = head2;
  if (a == NULL || b == NULL)
    return -1;
  //now it means both are having some lengths;
  int c1 = leng(head1);
  int c2 = leng(head2);

  //asuming for equal
  Node * x = NULL;
  Node * y = NULL;
  if (c1 > c2) {
    //a needs to move further
    int d = c1 - c2;
    //whatever is the d , it needs to skip that much nodes starting from head;
    int count = 0;
    while (a != NULL) {
      count++;
      //skipped one node
      a = a -> next;
      if (count == d)
        break;
    }
    //no we are here with equal distance
    x = a;
    y = b;
  } else if (c2 > c1) {
    //b needs to move further
    int d = c2 - c1;
    int count = 0;
    while (b != NULL) {
      count++;
      //skipped one node
      b = b -> next;
      if (count == d)
        break;
    }
    x = b;
    y = a;

  } else {
    x = a;
    y = b;
  }

  //no we are at equal distance
  while (x -> next != y -> next) {
    x = x -> next;
    y = y -> next;

  }
  return x -> next -> data;

}
