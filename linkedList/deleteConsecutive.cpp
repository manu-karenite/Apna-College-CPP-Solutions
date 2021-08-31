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
You have been given a singly linked list of integers where the elements are sorted in ascending order. 
Write a function that removes the consecutive duplicate values such that the given list only 
contains unique elements and returns the head to the updated list.

1 2 3 3 3 3 4 4 4 5 5 7 -1

1 2 3 4 5 7 
*****************************************************************/
#include <set>
Node *removeDuplicates(Node *head)
{
    //Write your code here
    //we'll be using  a set here
    set<int> s;
    
    //whenever we check whether the NEXT data is in set already , 
    //we perform deleteNode operation on that next node 
    
    //base case 1 :
    if(head == NULL)
        return head;
    if(head->next == NULL)
        return head ; //just one element
    
    //for performance put the first data in the set
    s.insert(head->data);
    
    Node* temp = head;
    while(temp->next!= NULL)
    {
        int nextData = temp->next->data;
        if(s.find(nextData) == s.end()) //not found
        {
            //go on continue!
            temp = temp->next;
            s.insert(temp->data);
            
        }
        else
        {
            //match is founc
            //we stand  one step behinf , do the delete operation
            Node* toDelete = temp->next;
            Node* nextToNext = temp->next->next;
            temp->next = nextToNext;
            delete toDelete;
            s.insert(temp->data);
            //no need to increment temp
        }
    }
    return head;
}