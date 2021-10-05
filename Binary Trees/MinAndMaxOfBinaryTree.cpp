// For a given a Binary Tree of type integer, find and return the minimum and the maximum data values.
// Return the output as an object of Pair class, which is already created.
// Note:
// All the node data will be unique and hence there will always exist a minimum and maximum node data.

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

/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
#include <climits>

#include <bits/stdc++.h>

pair < int, int > getMinAndMax(BinaryTreeNode < int > * root) {
  // Write your code here

  //let's add a dummy base case here as base case is not required
  if (root == NULL) {
    pair < int, int > p;
    p.first = INT_MAX;
    p.second = INT_MIN;
    return p;
  }

  //obviopusly the root is not null
  //lets do one thing , get the answers from both the sides
  pair < int, int > left = getMinAndMax(root -> left);
  pair < int, int > right = getMinAndMax(root -> right);

  //now comparison starts
  pair < int, int > answer;
  // answer.first = min(left.first,min(left.second,min(root->data,min(right.first,right.second))));
  // answer.second=max(left.first,max(left.second,max(root->data,max(right.first,right.second))));
  answer.first = min(left.first, min(root -> data, right.first));
  answer.second = max(left.second, max(root -> data, right.second));

  return answer;

}
