//  Code: Construct BST from a Sorted Array
// Send Feedback
// Given a sorted integer array A of size n, which contains all unique elements. You need to construct a balanced BST from this input array. Return the root of constructed BST.
// Note: If array size is even, take first mid as root.

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
BinaryTreeNode<int>* solve(int * input , int start, int end)
{
    if(start>end)
        return NULL;
    
    //otherwise get the root as the middle index one
    int midIndex = start + (end-start)/2;
    
    //create the root 
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[midIndex]);
    //root is created
    root->left = solve(input,start,midIndex-1);
    root->right = solve(input,midIndex+1,end);
    
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	// Write your code here
    int start = 0;
    int end = n-1;
    //start and end are INDICES;
    return solve(input,start,end);
}
