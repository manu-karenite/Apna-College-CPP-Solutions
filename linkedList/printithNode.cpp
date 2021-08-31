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

*****************************************************************/
int getCound(Node* head)
{
    int count=0;
    Node* temp = head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void printIthNode(Node *head, int i)
{
    int count = getCound(head);
    if(count==0 || i>=count)
        return;
  	Node* temp = head;
    int z=0;
    while(temp!=NULL)
    {
        if(i==z)
        {
            cout<<temp->data;
            return;
        }
        z++;
        temp = temp->next;
        
    }
    
}