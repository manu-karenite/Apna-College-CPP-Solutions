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

Given a singly linked list of integers and position 'i', delete the node present at the 'i-th' position in the linked list recursively.
 Note :
Assume that the Indexing for the linked list always starts from 0.

No need to print the list, it has already been taken care. Only return the new head to the list.
*****************************************************************/

int count(Node* head)
{
    int count =0;
    Node* temp = head;
    while(temp!=NULL)
    {
        count++;
        temp =temp->next;
    }
    return count;
}
Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    
    int len = count(head); //length is obtained
    if(len==0 || pos >= len)
    {
        //dont need to do anything
        return head ; //exisitng one
        
    }
    
    if(pos==0) //induction case
    {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }
    //otherwise
    Node* newHead = deleteNodeRec(head->next , pos-1);
    head->next = newHead;
    return head;
}