/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
Given a linked list of 0s, 1s and 2s, sort it. 
Easy Accuracy: 49.37% Submissions: 59314 Points: 2
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. 
The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 
2s at the end of the linked list, and 1s in the mid of 0s and 2s.
*/

Node* segregate(Node *head) {
        
        // Add code here
        int z=0;
        int o=0;
        int t=0;
        Node* temp = head;
        
        int count=0;
        while(temp!=NULL)
        {
            if(temp->data==0) z++;
            else if(temp->data==1)o++;
            else t++;
            temp = temp->next;
        }
        
        temp=head;
        for(int i=0;i<z;i++)
        {
            temp->data = 0;
            temp=temp->next;
            
        }
        
         for(int i=0;i<o;i++)
        {
            temp->data = 1;
            temp=temp->next;
            
        }
        
        for(int i=0;i<t;i++)
        {
            temp->data = 2;
            temp=temp->next;
            
        }
        return head;
        
    }