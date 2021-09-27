/************************************************************
 Given a generic tree, find and return the height of given tree.
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
#include <vector>

#include <bits/stdc++.h>

int getHeight(TreeNode < int > * root) {
  // Write your code here
  //what if root is NULL , obviously height is 0 
  //lets do this

  if (root == NULL)
    return 0;

  //now lets get the height of all the subtrees

  int numOfChildren = root -> children.size();
  if (numOfChildren == 0)
    return 1;

  int arr[numOfChildren];
  for (int i = 0; i < numOfChildren; i++) {
    int ans = getHeight(root -> children.at(i));
    arr[i] = ans;
  }
  // for(int i=0;i<numOfChildren;i++)
  // cout<<arr[i]<<" ";
  int maxi = * max_element(arr, arr + numOfChildren); //this should work only when we have atleats one child , otherwise
  //run time error , so we have added a base case for 0 children ***
  return maxi + 1;
}
