/*
Given a linked list of size N and a key. The task is to insert the key in the middle of the linked list.

Example 1:

Input:
LinkedList = 1->2->4
key = 3
Output: 1 2 3 4
Explanation: The new element is inserted
after the current middle element in the
linked list.
Example 2:

Input:
LinkedList = 10->20->40->50
key = 30
Output: 10 20 30 40 50
Explanation: The new element is inserted
after the current middle element in the
linked list and Hence, the output is
10 20 30 40 50.
*/
class Solution {
    
    public Node insertInMid(Node head, int data){
        //Insert code here, return the head of modified linked list
        if(head==null)
            {
                 Node newNode = new Node(data);
                 return newNode;
            }
        Node slow = head;
        Node fast = head.next;
        while(fast!=null && fast.next!=null)
        {
           slow = slow.next;
           fast=fast.next.next;
        }
        //slow is on the middle of LL
        //and next is ibviosuly not null
        
        //create a new node
        Node newNode = new Node(data);
        newNode.next = slow.next;
        slow.next=newNode;
        return head;
        
    }
}
