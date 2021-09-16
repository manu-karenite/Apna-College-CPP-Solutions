/*
Delete node in Doubly Linked List 
Basic Accuracy: 48.28% Submissions: 34378 Points: 1
Given a doubly linked list and a position. The task is to delete a node from given position in a doubly linked list.

Example 1:

Input:
LinkedList = 1 <--> 3 <--> 4 
x = 3
Output: 1 3  
Explanation: After deleting the node at
position 3 (position starts from 1),
the linked list will be now as 1->3.
Example 2:

Input:
LinkedList = 1 <--> 5 <--> 2 <--> 9  
x = 1
Output: 5 2 9
*/
class Solution {
  public:
    Node * deleteNode(Node * head, int x) {
      //Your code here
      if (head == NULL || (head -> next == NULL && x == 1))
        return NULL;

      //atleast 2 nodes now
      //we need to go on the previous node of target node
      if (x == 1) {
        Node * toDelete = head;
        head = head -> next;
        head -> prev = NULL;
        delete toDelete;
        return head;
      }

      Node * temp = head;
      int z = 1;
      while (temp != NULL) {
        if (z == x - 1)
          break;
        temp = temp -> next;
        ++z;
      }

      // we stand on the previous node
      //there are two chances, that the afterNiode of targets can be null or not
      Node * afterTarget = temp -> next -> next;
      if (afterTarget == NULL) {
        Node * target = temp -> next;
        temp -> next = NULL;
        delete target;
        return head;
      } else {
        Node * target = temp -> next;
        temp -> next = afterTarget;
        afterTarget -> prev = temp;
        delete target;
        return head;
      }
    }
};
