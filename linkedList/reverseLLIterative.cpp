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
Given a singly linked list of integers, reverse it iteratively and return the head to the modified list.

*****************************************************************/

Node *reverseLinkedList(Node *head) {
    // Write your code here
    
    if(head == NULL || head->next == NULL)
        return head;
	//no need of recursion
    
    Node* previous = NULL;
    Node* current = head;
    Node*temp = head;
    
    while(current!=NULL)
    {
        //task 1 : get the temp pointed to next
        temp = current->next;
        //task2 :get current point to previous now(arrow reverse)
        current->next = previous;
        //task 3 : get the previous to the current position
        previous = current;
        //task4 : get the current to the next posiitonm
        current = temp;
    }
    return previous;
    
}