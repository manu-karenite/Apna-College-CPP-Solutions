// Given a binary tree, check if it is balanced. Return true if given binary tree is balanced, false otherwise.
// Balanced Binary Tree:
// A empty binary tree or binary tree with zero nodes is always balanced. For a non empty binary tree to be balanced, following conditions must be met:
// 1. The left and right subtrees must be balanced.
// 2. |hL - hR| <= 1, where hL is the height or depth of left subtree and hR is the height or depth of right subtree.    

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

pair < int, bool > solve(BinaryTreeNode < int > * root) {
  //although root is not null , dummy base is required for null values at end of recursion
  if (root == NULL) {
    pair < int, bool > answer;
    answer.first = 0; //height of a null tree is 0;
    answer.second = true; //null tree is always balanced
    return answer;
  }

  //now what happens when root is not null;
  //lets bring the answers first from left and right
  pair < int, bool > left = solve(root -> left);
  pair < int, bool > right = solve(root -> right);

  //now we have got the answers
  bool finalAns = true;
  //task1 : check whther both are balanced or not

  if (((left.second) & (right.second)) == false) //means prmary condition is violated
    finalAns = false;

  //we are here means both are itself balanced
  else {
    int greaterHeight = max(left.first, right.first);
    int smallerHeight = min(left.first, right.first);
    if ((greaterHeight - smallerHeight) > 1)
      finalAns = false;
  }

  //we are here means , second condition is also true
  //can we return true? no

  pair < int, bool > answer;
  answer.first = max(left.first, right.first) + 1;
  answer.second = finalAns;
  return answer;

}

bool isBalanced(BinaryTreeNode < int > * root) {
  // Write your code here
  //what if root is null , no need of further calculation
  if (root == NULL)
    return true;

  //otherwise lets do one thing , while working on left or right part , we'll ask any part to return boolean as well as height
  pair < int, bool > answer = solve(root); //we are sure root is not null
  return answer.second;
  //if we want to know the height , we can cout<<answer.first;
}
