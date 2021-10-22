//  Code: Print Elements in Range
// Send Feedback
// Given a Binary Search Tree and two integers k1 and k2, find and print the elements which are in range k1 and k2 (both inclusive).
// Print the elements in increasing order.

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

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
	// Write your code here
    
    if(root==NULL)
        return; //we cannot get the values
    
    //otherwise root exists
    
    //since we have to get this in increasing Order
    //order should be
    //1 left subtree
    //2 root
    //3 right
    
    //for left subtree , 
    if(root->data >k1)
    {
        //there are chances that k1 can be lying in the left subtree
        elementsInRangeK1K2(root->left,k1,k2);
        
    }
    if(root->data >=k1 && root->data<=k2)
        cout<<root->data<<" ";
     if(root->data <=k2)
    {
        //there are chances that k1 can be lying in the left subtree
        elementsInRangeK1K2(root->right,k1,k2);
        
    }
    
}
