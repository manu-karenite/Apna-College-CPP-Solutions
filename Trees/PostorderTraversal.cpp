/************************************************************
 Given a generic tree, print the post-order traversal of given tree.
The post-order traversal is: visit child nodes first and then root node.
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

void printPostOrder(TreeNode < int > * root) {
  // Write your code here
  //there is nothing to print when root is null
  if (root == NULL)
    return;

  int numOfChildren = root -> children.size();
  for (int i = 0; i < numOfChildren; i++) {
    printPostOrder(root -> children.at(i)); //visiting all child nodes first
    //first they will do work
  }
  cout << root -> data << " "; //then i will do
}
