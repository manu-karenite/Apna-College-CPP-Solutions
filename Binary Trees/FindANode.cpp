/*
For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.
*/


/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode < int > * root, int x) {
  // Write your code here
  //what to do if root is null ? at any cost x cannot be found
  if (root == nullptr)
    return false;

  //now a tree exists
  //check for the root first, if found why to go ahead
  if (root -> data == x)
    return true;

  //but if not , get the answer from the both the subtrees and return according to 2 cases
  bool leftAns = isNodePresent(root -> left, x);
  bool rightAns = isNodePresent(root -> right, x);

  return leftAns | rightAns; //OR
}
