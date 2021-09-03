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
You have been given two sorted(in ascending order) singly linked lists of integers.
Write a function to merge them in such a way that the resulting singly linked list is also sorted(in ascending order) and return the new head to the list.
Note :
Try solving this in O(1) auxiliary space.

No need to print the list, it has already been taken care.
*****************************************************************/
Node* getFinalLL(Node*head1 , Node* head2,Node* head,Node* tail)
{
    //no ned of base cases for head1 and head2 , already filtered
    
    //first traversal on both
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            //we need to create a node here
            Node* p = new Node(temp1->data);
            if(head==NULL) //then tail will be null
            {
                head = p;
                tail=p;
            }
            else
            {
                tail->next = p;
                tail=p;
            }
            //increase the poibnter
            temp1 = temp1->next;
            
        }
        else
        {
            //when temp2 is smaller
            Node* p = new Node(temp2->data);
            if(head==NULL) //then tail will be null
            {
                head = p;
                tail=p;
            }
            else
            {
                tail->next = p;
                tail=p;
            }
            //increase the poibnter
            temp2 = temp2->next;
            
        }
    }
    
    //now there are chances any one of them can be empty
    //so considering that
    while(temp1!=NULL)
    {
        Node* p = new Node(temp1->data);
        tail->next = p;
        tail=p;
        temp1=temp1->next;   
    }
    
    while(temp2!=NULL)
    {
        Node* p = new Node(temp2->data);
        tail->next = p;
        tail=p;
        temp2=temp2->next;   
    }
    return head;
    
}
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    //when we dont need to do anything?
    //anyone of both are null
    if((head1==NULL && head2==NULL))
        return NULL;
    if(head1==NULL && head2!=NULL)
        return head2; //bcoz no elements are there in 1st LL
    if(head1!=NULL && head2==NULL)
        return head1;
    
    //Base cases are complete
    //when we are here it means , both head 1 and head2 are not null
    
    Node* newHead = NULL;
    Node* tail = NULL;
    newHead = getFinalLL(head1,head2,newHead,tail);
    return newHead;
}