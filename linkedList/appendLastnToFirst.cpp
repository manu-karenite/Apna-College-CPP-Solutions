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


You have been given a singly linked list of integers along with an integer 'N'. 
Write a function to append the last 'N' nodes towards the front of the singly linked list and returns the new head to the list.

1 2 3 4 5 -1
3
10 20 30 40 50 60 -1
5

3 4 5 1 2
20 30 40 50 60 10

*****************************************************************/

int getLeng(Node* head)
{
    if(head ==NULL)
        return 0;
    Node* temp = head;
    
    int count =0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    //step 1 : get the length of LL
    int count = getLeng(head);
    if(n==0 || n>count)
        return head;
    
    //get the last node after which we should cut the LL
    //example : 1->2->3->4->5->null , n= 3 , so x = length - n = 2 , so after 1->2-> to be cut
    
    int x = count - n ;
    
    Node* last = head;
    int countTillX = 1;
    while(countTillX!=x)
    {
        last = last->next;
        countTillX++;
        
    }
    
    //last stands on the last node after which it is t be cut
    Node * newHead = last->next;
    last->next = NULL;
    
    //attatch head to the last of the newLL formed
    
    Node*temp = newHead;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    //temp is the last node
    temp->next = head;
    
    return newHead;
}