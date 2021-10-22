//  Code: Search in BST
// Send Feedback
// Given a BST and an integer k. Find if the integer k is present in given BST or not. You have to return true, if node with data k is present, return false otherwise.
// Note: Assume that BST contains all unique elements.

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

bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Write your code here
    //lets check for the root being null , if its null then ofcoitse
    if(root==NULL)
        //then at no matter what, k will never be there
        return false;
    
    //otherwise root exists
    if(root->data==k)
        	return true;
    //no need of asking for subtrees
    
    //otherwise
    bool leftAns = searchInBST(root->left,k);
    bool rightAns = searchInBST(root->right,k);
    
    return (leftAns|rightAns);
    
}
