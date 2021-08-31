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

You have been given a singly linked list of integers. 
Write a function to print the list in a reverse order.
To explain it further, you need to start printing the data from the tail 
and move towards the head of the list, printing the head data at the end.

*****************************************************************/
#include <stack>
void printReverse(Node *head)
{
    //Write your code here
    if(head==NULL)
        return;
    
    stack<int> s; //we'll use a stack to reverse so that it happens in O(n)
    Node*temp = head;
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp = temp->next;
    }
    
    //stack is full
    
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return;
}