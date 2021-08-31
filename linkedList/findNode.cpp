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


You have been given a singly linked list of integers. Write a function that returns the index/position of integer data denoted by 'N' (if it exists). 
Return -1 otherwise.
Note :
Assume that the Indexing for the singly linked list always starts from 0.
*****************************************************************/

int findNode(Node *head, int n){
    // Write your code here.
    if(head == NULL)
        return -1;
    
    //check base case done
    
    if(head->data == n)
        return 0;
    
    int ans = findNode(head->next , n);
    
    if(ans == -1 )
        return -1;
    else 
        return (1+ ans);
    
}