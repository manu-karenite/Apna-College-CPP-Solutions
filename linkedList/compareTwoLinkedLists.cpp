/*
Compare two linked lists 
Easy Accuracy: 50.29% Submissions: 16701 Points: 2
Given two string, represented as linked lists (every character is a node->data in the linked list). Write a function compare() that works similar to strcmp(), i.e., it returns 0 if both strings are same, 1 if first linked list is lexicographically greater, and -1 if second is lexicographically greater.

Input:
First line of input contains number of testcases T. For each testcase, there will be 4 lines of input. First line of which contains length of first linked list and next line contains the linked list, similarly next two lines contains length and linked list respectively.

Output:
Comapare two strings represented as linked list.

User Task:
The task is to complete the function compare() which compares the strings through linked list and returns 0, 1 or -1 accordingly.

Constraints:
1 <= T <= 100
1 <= N, M <= 100

Example:
Input:
2
5
a b a b a
4
a b a a
3
a a b
3
a a b

Output:
1
0
*/

int compare(Node * list1, Node * list2) {
  // Code Here
  //chnaces of returning 1,0,-1 is only upto the case when pboth are not null
  //no need of base case as  1 <= N, M <= 100

  Node * temp1 = list1;
  Node * temp2 = list2;

  while (temp1 != NULL && temp2 != NULL) {
    if (temp1 -> c > temp2 -> c)
      return 1;
    else if (temp2 -> c > temp1 -> c)
      return -1;
    else {
      temp1 = temp1 -> next;
      temp2 = temp2 -> next;

    }
  }

  if (temp1 == NULL && temp2 == NULL) {
    //means both were same
    return 0;
  } else if (temp1 != NULL)
    return 1;
  else
    return -1;
}
