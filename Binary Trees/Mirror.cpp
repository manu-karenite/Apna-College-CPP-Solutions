/*
For a given Binary Tree of type integer, update it with its corresponding mirror image.
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

void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
    //base case - we don't need to do anything , when root is null
    //bcoz we cannot mirror a null tree
    if(root==nullptr)
		return;
    
    //the root exists now
    //the root remains in place
    
    //let the subtrees do thier mirrorign first
     mirrorBinaryTree(root->left);
     mirrorBinaryTree(root->right);
    
    //simply just now swap the subtrees
    BinaryTreeNode<int>* temp = root->left;
    root->left = root->right;
    root->right = temp;
    
    //done
    
    
}
