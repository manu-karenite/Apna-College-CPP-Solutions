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

Given a linked list, find and return the length of the given linked list recursively.
*****************************************************************/

int length(Node *head) {
    // Write your code here
    //base case 
    if(head==NULL)
        return 0;
    int countRecursively = length(head->next);
    return(1+countRecursively);
}