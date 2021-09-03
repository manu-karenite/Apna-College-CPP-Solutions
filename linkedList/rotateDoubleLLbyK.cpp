//User function Template for C++

/*
struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
Given a doubly linked list,
 rotate the linked list counter-clockwise by P nodes. 
 Here P is a given positive integer and is smaller than the count of nodes(N) in a linked list.
*/

struct node*update(struct node*head,int p)
{
    //Add your code here
   
    struct node*temp = head;
    if(p==0)
        return head;
    
    for(int i=0;i<p-1;i++)
    {
        
        temp = temp->next;
    }
    
    //we stand on the node which is last in this case
    struct node* afterNode = temp->next;
    afterNode->prev = NULL;
    temp->next = NULL;
    //BROKEN
    
    //GO TO THE END OF LL
    struct node*a = afterNode;
    while(a->next!=NULL)
    {
        a = a->next;
    }
    //stand on the last node
    a->next = head;
    head->prev = a;
    return afterNode;
    
   
    
}