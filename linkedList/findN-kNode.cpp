/*
Find n/k th node in Linked list 
Basic Accuracy: 44.94% Submissions: 23928 Points: 1
Given a singly linked list and a number k. Write a function to find the (N/k)th element, where N is the number of elements in the list. We need to consider ceil value in case of decimals.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case consists of an integer N. The second line consists of N spaced integers.The last line consists of an integer k.

Output:
Print the data value of (N/k)th node in the Linked List.

User Task:
The task is to complete the function fractional_node() which should find the n/kth node in the linked list and return its data value.

Constraints: 
1 <= T <= 100
1 <= N <= 100

Example:
Input:
2
6
1 2 3 4 5 6
2
5
2 7 9 3 5
3

Output:
3
7
*/
int length(Node * head) {
  int count = 0;
  struct Node * temp = head;
  while (temp != nullptr) {
    count++;
    temp = temp -> next;
  }
  return count;
}
int fractional_node(struct Node * head, int k) {

  // add your code here
  //get lenght first
  int len = length(head);
  float ans = ((float) len) / k;
  int z = ceil(ans);

  int count = 1;
  struct Node * temp = head;
  while (temp != nullptr) {
    if (count == z)
      return temp -> data;

    count++;
    temp = temp -> next;
  }

}
