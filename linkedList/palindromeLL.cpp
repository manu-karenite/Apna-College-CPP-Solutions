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

You have been given a head to a singly linked list of integers.
 Write a function check to whether the list given is a 'Palindrome' or not.
*****************************************************************/
#include <stack>
#include <queue>
int countNodes(Node* head)
{
    if(head == NULL)
        return 0;
    Node*temp = head;
    int count =0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}
bool isPalindrome(Node *head)
{
    //Write your code here
    int count = countNodes(head);
    //count the nodes
    //for even length ; 1 2 3 4 5 6
    //1 2 3 in stack , 4 5 6 in queue
    
	//for odd length  : 1 2 3 2 1 , 1 2 in stack , skip 3 and 21 in queue
    
    //length 0 and 1 are always palindromes
    if(count==0 || count==1)
        return true;
    //from 2 onwards  this logic is applicable
    
    //n/2 to always go in stack
    stack<int> s;
    queue<int> q;
    
    
    Node* temp = head;
    for(int i=0;i<count/2;i++)
    {
        s.push(temp->data);
        temp = temp->next;
    }
     //stack done
     //standing on the bridge nide
    //whether to skip or not?
    if(count%2==1)
        temp = temp->next;
    for(int i=0;i<count/2;i++)
    {
        q.push(temp->data);
        temp = temp->next;
    }
    //stack and queue done
    //contains equal size
    
    while(s.empty()==false)
    {
        if(s.top()!=q.front())
        {
            return false;
        }
        s.pop();
        q.pop();
    }
    return true;
    
    
}