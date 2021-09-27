/*
Given a generic tree, find and return the sum of all nodes present in the given tree.
/************************************************************
 
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

int sumOfNodes(TreeNode < int > * root) {
  // Write your code here
  if (root == NULL)
    return 0;

  int sum = 0;
  int numberOfChildren = root -> children.size();
  for (int i = 0; i < numberOfChildren; i++)
    sum += sumOfNodes(root -> children.at(i));
  return (sum + root -> data);

}
