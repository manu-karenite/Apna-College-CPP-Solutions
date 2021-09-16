/*
Merge 2 sorted linked list in reverse order 
Easy Accuracy: 51.02% Submissions: 19277 Points: 2
Given two linked lists of size N and M, which are sorted in non-decreasing order. The task is to merge them in such a way that the resulting list is in decreasing order.

Input:
First line of input contains number of testcases T. For each testcase, first line of input conatains length of both linked lists N and M respectively. Next two lines contains N and M elements of two linked lists.

Output:
For each testcase, print the merged linked list which is in non-increasing order.

User Task:
The task is to complete the function mergeResult() which takes reference to the heads of both linked list and returns the pointer to the merged linked list.

Constraints:
1 <=T<= 50
1 <= N, M <= 1000

Example:
Input:
2
4 3
5 10 15 40 
2 3 20
2 2
1 1
2 4

Output:
40 20 15 10 5 3 2
4 2 1 1 
*/

class GfG {
  Node mergeResult(Node node1, Node node2) {
    // Your code here
    //no need of base cases as no null LL will be there
    //come directly to the main case
    //whenever we ncounter a node, its data should be put in the last
    //so well always be adding at head , okay

    Node head = null;
    Node temp1 = node1;
    Node temp2 = node2;
    int dat = -1;
    while (temp1 != null && temp2 != null) {
      if (temp1.data < temp2.data) {
        //data of temp1 to be taken and attached
        dat = temp1.data;
        temp1 = temp1.next;
      } else {
        dat = temp2.data;
        temp2 = temp2.next;
      }

      //now we need to attach
      //1. create a new node first
      Node newNode = new Node(dat);
      //2.if emptyll , make it head,otherwise just attach in front
      if (head == null)
        head = newNode;
      else {
        newNode.next = head;
        head = newNode;
      }

    }

    //what if any of the two ll is clear earlier
    while (temp1 != null) {
      Node newNode = new Node(temp1.data);
      newNode.next = head;
      head = newNode;
      temp1 = temp1.next;

    }

    while (temp2 != null) {
      Node newNode = new Node(temp2.data);
      newNode.next = head;
      head = newNode;
      temp2 = temp2.next;

    }
    return head;
  }
}
