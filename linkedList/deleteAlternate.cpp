/*
Given a Singly Linked List of size N, delete all alternate nodes of the list.

Example 1:

Input:
LinkedList: 1->2->3->4->5->6
Output: 1->3->5
Explanation: Deleting alternate nodes
results in the linked list with elements
1->3->5.
 

Example 2:

Input:
LinkedList: 99->59->42->20
Output: 99->42
*/

void deleteAlt(struct Node *head){
    // Code here
    //base case
    Node* temp = head;
    if(temp==NULL || temp->next==NULL)
        return;
    
    //we atleast have two elements
    //temp is already on head
    while(temp!=NULL && temp->next!=NULL)
    {
        Node* toDelete = temp->next;
        temp->next=temp->next->next;
        delete toDelete;
        
        temp = temp->next;
    }
}
