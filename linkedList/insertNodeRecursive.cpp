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
You have been given a linked list of integers. Your task is to write a function that inserts a node at a given position, 'pos'.
Note:
Assume that the Indexing for the linked list always starts from 0.

If the given position 'pos' is greater than length of linked list, then you should return the same linked list without any change. And if position 'pos' is equal to length of input linked list, then insert the node at the last position.
*****************************************************************/
int length(Node* head)
{
    if(head==NULL)
        return 0;
    int count=0;
    Node*temp = head;
    while(temp!=NULL)
    {
        count++;
        temp =temp->next;
    }
    return count;
}
Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    int leng = length(head);
    //when to return as it is?
    //when head is null or pos lies out of bounds
    if(head == NULL || i>leng)
        return head;
    if(i==0)
    {
         Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }

    //now manipulate
    if(i==1)
    {
        //do here
        //create a new  Node
        Node* newNode = new Node(data);
        Node* futureNode = head->next;
        head->next = newNode;
        newNode->next = futureNode;
        return head;
    }
    
    //otherwise 
    Node* returnedHead = insertNode(head->next , i-1,data);
    head->next = returnedHead;
    return head;
    
}