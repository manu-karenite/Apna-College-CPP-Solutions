/*For a given Binary Tree of integers, print the post-order traversal.*/
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
void postOrder(BinaryTreeNode < int > * root) {

  //root ->left ->null

  if (root == NULL)
    return;

  if ((root -> left) != NULL)
    postOrder(root -> left);
  if ((root -> right) != NULL)
    postOrder(root -> right);
  cout << root -> data << " ";

}
