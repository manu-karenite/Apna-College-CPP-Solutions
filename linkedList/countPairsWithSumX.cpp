/*Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Given two linked list of size N1 and N2 respectively of distinct elements, 
your task is to complete the function countPairs(), which returns the count of all pairs from both lists whose sum is equal to the given value X.
Note: The 2 numbers of a pair should be parts of different lists.

Example 1:

Input:
L1 = 1->2->3->4->5->6
L2 = 11->12->13

X = 15
Output: 3
Explanation: There are 3 pairs that
add up to 15 : (4,11) , (3,12) and (2,13)
*/

#include <unordered_map>

    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_map<int,int> u1;
        unordered_map<int,int> u2;
        
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1!=NULL)
        {
            u1[temp1->data]++;
            temp1 = temp1->next;
        }
        
         while(temp2!=NULL)
        {
            u2[temp2->data]++;
            temp2 = temp2->next;
        }
        
        int count =0;
        for(auto it = u1.begin();it!=u1.end();it++)
        {
            int key = it->first;
            int value = it->second;
            
            int remaining = u2[x-key];
            int  z = min(value,remaining);
            count = count+z;
            u1[key]-=z;
            u2[x-key]-=z;
            
        }
        return count;
    }
