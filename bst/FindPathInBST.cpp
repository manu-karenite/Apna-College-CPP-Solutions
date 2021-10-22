//  Find Path in BST
// Send Feedback
// Given a BST and an integer k. Find and return the path from the node with data k and root (if a node with data k is present in given BST) in a list. Return empty list otherwise.
// Note: Assume that BST contains all unique elements.

/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};


***********************************************************/
#include <bits/stdc++.h>

pair < bool, vector < int > * > solve(BinaryTreeNode < int > * root, int data) {
  pair < bool, vector < int > * > answer;
  vector < int > * v = new vector < int > ;

  if (root == NULL) {
    //we cannot find
    answer.first = false;
    answer.second = v;
    return answer;
  }

  //otherwise we have the root not equal to Null

  //what if we have the root itself as the value of data?
  //then just return the value of data in vector
  if (root -> data == data) {
    //pack the answer;
    answer.first = true;
    v -> push_back(root -> data);
    answer.second = v;
    return answer;
  }

  //otherwise get from the left and right
  if (data < root -> data) {
    pair < bool, vector < int > * > l = solve(root -> left, data);
    if (l.first == true) {
      //we get from the left subtree 
      //we need to add the value of current root
      l.second -> push_back(root -> data);
      return l;
    }
    answer.first = false;
    answer.second = v;
    return answer;
  }

  //if not left , check for right!

  pair < bool, vector < int > * > r = solve(root -> right, data);
  if (r.first == true) {
    //we get from the left subtree 
    //we need to add the value of current root

    //reverse(r.second->begin(),r.second->end());
    r.second -> push_back(root -> data);

    return r;
  }

  //what if both hasnt returned
  answer.first = false;
  answer.second = v;
  return answer;

}
vector < int > * getPath(BinaryTreeNode < int > * root, int data) {
  // Write your code here

  pair < bool, vector < int > * > answer = solve(root, data);
  return answer.second;

}
