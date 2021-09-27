/************************************************************
 Given a generic tree, count and return the number of leaf nodes present in the given tree.
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

int getLeafNodeCount(TreeNode < int > * root) {
  // Write your code here
  if (root == nullptr)
    return 0;

  //but what if atleats one child present
  int numOfChildren = root -> children.size();
  if (numOfChildren == 0)
    return 1;

  int leaves = 0;
  for (int i = 0; i < numOfChildren; i++) {
    leaves += getLeafNodeCount(root -> children.at(i));
  }
  return leaves;

}
