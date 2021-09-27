/************************************************************
 Given a generic tree and an integer x, check if x is present in the given tree or not. Return true if x is present, return false otherwise.
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

bool isPresent(TreeNode < int > * root, int x) {
  // Write your code here
  //if root is null , there is no chance of getting x
  if (root == nullptr)
    return false;

  //lets check the root data first, if it has it will return from there only
  //no need of going further then
  if (root -> data == x)
    return true;

  //we have reached here, bcoz nothing has been returned yet
  //lest call children to check now
  int numOfChildren = root -> children.size();
  for (int i = 0; i < numOfChildren; i++) {
    bool ans = isPresent(root -> children.at(i), x);
    if (ans == true)
      return true;

  }

  //if no option 
  //then 
  return false;
}
