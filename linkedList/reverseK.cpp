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
Given a singly linked list of integers, reverse the nodes of the linked list 'k' at a time and return its modified list.
 'k' is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of 'k,'
  then left-out nodes, in the end, should be reversed as well.
  
Example :
Given this linked list: 1 -> 2 -> 3 -> 4 -> 5

For k = 2, you should return: 2 -> 1 -> 4 -> 3 -> 5

For k = 3, you should return: 3 -> 2 -> 1 -> 5 -> 4
*****************************************************************/

Node *kReverse(Node *head, int k)
{
	//Write your code here
    //if 1 or 0 element , no sense of reversal
    if(head==NULL || head->next == NULL || k==0)
        return head;
    
    
    //first do for k nodes itself
    int count=0;
    Node* temp = head;
    Node* current = head;
    Node* previous = NULL;
    while(count<k && current!=NULL)
    {
        //task1 : 
        	temp = current->next;
        //task 2:
        	current->next = previous;
        //task 3:
        	previous = current;
        //task 4:
        	current = temp;
        //task 5:
        	count++;
    }
    if(temp!=NULL)
    {
        Node* secondPortion = kReverse(temp , k);
    	head->next = secondPortion;
    }
    return previous;
        
    
}
