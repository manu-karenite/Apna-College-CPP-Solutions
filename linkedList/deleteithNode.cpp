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


You have been given a linked list of integers. Your task is to write a function that deletes a node from a given position, 'POS'.
Note :
Assume that the Indexing for the linked list always starts from 0.

If the position is greater than or equal to the length of the linked list, you should return the same linked list without any change.
*****************************************************************/
int count(Node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    int leng = count(head);
    if(pos>=leng)
        return head;
    
    ///else either 0 or something<leng
    if(pos==0)
    {
        //get the head's next address
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }
    else
    {
        //move to 1 previous posiiton
        Node* temp = head;
        int z=0;
        while(temp!=NULL)
        {
            if(z==pos-1)
            {
                //we stand at the previous node
                break;
            }
            temp=temp->next;
            z++;
        }
        //go to delete next node
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
        return head;
    }
}
