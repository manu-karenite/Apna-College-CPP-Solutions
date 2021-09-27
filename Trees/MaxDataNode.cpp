/************************************************************
 Given a generic tree, find and return the node with maximum data. You need to return the node which is having maximum data.
Return null if tree is empty.
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

TreeNode < int > * maxDataNode(TreeNode < int > * root) {
  // Write your code here

  //what to do if tree is null
  if (root == NULL)
    return NULL;
  //now we have atleast one node
  //lets get the node from all the children first and then compare with parent before returning
  //get the children fiirst
  int numOfChildren = root -> children.size();
  TreeNode < int > * arr[numOfChildren]; //to store the biggest they give us

  for (int i = 0; i < numOfChildren; i++) {
    arr[i] = maxDataNode(root -> children.at(i));
  }
  //after this suppose every subtree has given its highest node
  TreeNode < int > * biggestNode = root;
  for (int i = 0; i < numOfChildren; i++) {
    if (arr[i] -> data > biggestNode -> data)
      biggestNode = arr[i];
  }
  return biggestNode;

}
