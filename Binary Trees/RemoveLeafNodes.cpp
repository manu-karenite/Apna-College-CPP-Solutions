// Given a binary tree, remove all leaf nodes from it. Leaf nodes are those nodes, which don't have any children.
// Note:
// 1. Root will also be a leaf node if it doesn't have left and right child. 
// 2. You don't need to print the tree, just remove all leaf nodes and return the updated root.

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

BinaryTreeNode < int > * removeLeafNodes(BinaryTreeNode < int > * root) {
  // Write your code here
  //what to do if root is null?
  //nothing
  if (root == nullptr)
    return nullptr;
  //okay , wo what to do if root is a leaf only
  //delete that root and return null
  if (root -> left == nullptr & root -> right == nullptr) {
    BinaryTreeNode < int > * temp = root;
    delete temp;
    return nullptr;
  }

  root -> left = removeLeafNodes(root -> left);
  root -> right = removeLeafNodes(root -> right);
  return root;

}
