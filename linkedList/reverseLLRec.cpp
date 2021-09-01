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
Given a singly linked list of integers, reverse it using recursion and return the head to the modified list. 
You have to do this in O(N) time complexity where N is the size of the linked list.
Note :
No need to print the list, it has already been taken care. Only return the new head to the list.
*****************************************************************/

Node *reverseLinkedListRec(Node *head)
{
    //Write your code here
    //base case ? when 0 or 1 element
    if(head==NULL || head->next == NULL)
        return head; //as it is
    
    //get the ans of recursion
    Node* newHead = reverseLinkedListRec(head->next);
    //this newHead will have the last node as corrent head
    Node*temp = newHead;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    //stand on the last node
    head->next =  NULL;
    temp->next = head;
    
    return newHead;
}