/*You are given the root node of a binary tree.Print its preorder traversal.*/

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
                                                                                              
void preOrder(BinaryTreeNode<int> * root)
{

//root ->left ->null

if(root==NULL)
        return;
//root exists;

cout<<root->data<<" ";

if((root->left)!=NULL)
        preOrder(root->left);
if((root->right)!=NULL)
        preOrder(root->right);
}
