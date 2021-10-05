/*
For a given Binary Tree of integers, find and return the height of the tree.
                         10
                      /      \
                    20      30
                   /    \
                 40    50

Height of the given tree is 3. 

Height is defined as the total number of nodes along the longest path from the root to any of the leaf node.
*/

/***********************************************************
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

int height(BinaryTreeNode<int>* root) {
    // Write our code here
    
    //if root is null itself, then the tree cannot have any height
    if(root==nullptr)
        return 0; //simply 
    
    //now we have the root , so lets call the recursion first and they will bring their repective heights
    //because the root is already present
    
    int leftAns = height(root->left);
    int rightAns = height(root->right);
    
    return max(leftAns,rightAns)+1; //+1 for the root level
}
