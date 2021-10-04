/*
For a given a Binary Tree of type integer, print the complete information of every node, when traversed in a level-order fashion.
To print the information of a node with data D, you need to follow the exact format :

           D:L:X,R:Y

Where D is the data of a node present in the binary tree. 
X and Y are the values of the left(L) and right(R) child of the node.
Print -1 if the child doesn't exist.
*/

/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
#include <queue>

void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
    //what happens when root is null?
    //we dont do anything
    if(root==NULL)
        return;
    
    //for level wise , then atlast queue is required
    queue<BinaryTreeNode<int>*> q;
    
    //insert the root in the q
    q.push(root);
    
    //now, we can have uniform iteration for every root
    while(q.size()!=0)
    {
        //get the front node of the q
        BinaryTreeNode<int>* front = q.front();
        cout<<front->data<<":"; //we first print the node
        //now let's print the children
        
        //let's now handle the left child
        cout<<"L:";
        if(front->left!=NULL)
        {
            q.push(front->left);
            cout<<front->left->data<<",";
        }
        else
            cout<<"-1,";
        
        //now lets handle the right child
        cout<<"R:";
        if(front->right!=NULL)
        {
            q.push(front->right);
            cout<<front->right->data; //no comma is required here
        }
        else
            cout<<"-1"; //no comma is required here
        
        cout<<endl;
        
        //now please remove the front element from q
        q.pop();  
    }
    
}
