/*
Find the Sum of Last N nodes of the Linked List 
Basic Accuracy: 50.83% Submissions: 21609 Points: 1
Given a single linked list of size M, your task is to complete the function sumOfLastN_Nodes(), which should return the sum of last N nodes of the linked list.

Input:
The function takes two arguments as input, the reference pointer to the head of the linked list and the an integer N.
There will be T test cases and for each test case the function will be called seperately.

Output:
For each test case output the sum of last N nodes of the linked list.

Constraints:
1<=T<=100
1<=N<=M<=1000

Example:
Input:
2
6 3
5 9 6 3 4 10
2 2
1 2

Output:
17
3
*/
int sumOfLastN_Nodes(struct Node * head, int n) {
  // Code here
  Node * temp = head;
  int i = 0;
  while (temp != NULL) {
    i = i + 1;
    temp = temp -> next;
  }
  temp = head;
  int sum = 0;
  int k = 0;
  while (k <= i - n - 1) {
    temp = temp -> next;
    k++;
  }
  while (temp != NULL) {
    sum = sum + temp -> data;
    temp = temp -> next;
  }
  return sum;
}
