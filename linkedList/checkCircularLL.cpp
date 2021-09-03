/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
Given head, the head of a singly linked list, find if the linked list is circular or not.

 A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. 
 An empty linked list is considered as circular.
*/
#include <set>
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   //address are unique
   set<Node*> s;
   
   Node* temp = head;
   while(temp!=NULL)
   {
       if(s.find(temp)!=s.end()) //meaning found
        return true;
        s.insert(temp);
        temp = temp->next;
   }
   //if nothing 
   return false;
}
