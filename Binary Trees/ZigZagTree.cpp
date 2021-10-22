//  ZigZag tree

// Given a binary tree, print the zig zag order. In zigzag order, level 1 is printed from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even level right to left.
   

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
#include <queue>

#include <stack>

void solve(queue < BinaryTreeNode < int > * > & q, int level) {

  if (q.size() == 0)
    return;
  if (level % 2 == 1) {
    //means we are talking about even level , hence R to L
    int l = q.size();
    int i = 0;
    stack < BinaryTreeNode < int > * > s;
    while (i < l) {
      BinaryTreeNode < int > * front = q.front();
      q.pop();
      cout << front -> data << " ";
      s.push(front);

      //okay done , 
      i++;

    }
    while (s.size() != 0) {
      BinaryTreeNode < int > * front = s.top();
      s.pop();

      if (front -> right != NULL)
        q.push(front -> right);
      if (front -> left != NULL)
        q.push(front -> left);

    }
    cout << endl;
    //call recursion of
    solve(q, level + 1);
  } else {
    int l = q.size();
    int i = 0;
    stack < BinaryTreeNode < int > * > s;

    while (i < l) {
      BinaryTreeNode < int > * front = q.front();
      q.pop();
      cout << front -> data << " ";
      s.push(front);

      i++;

    }
    while (s.size() != 0) {
      BinaryTreeNode < int > * front = s.top();
      s.pop();
      if (front -> left != NULL)
        q.push(front -> left);
      if (front -> right != NULL)
        q.push(front -> right);

    }
    cout << endl;
    solve(q, level + 1);
  }

}
void zigZagOrder(BinaryTreeNode < int > * root) {
  // Write your code here
  //let's check for the base case first
  if (root == NULL)
    return;
  //because we dont need to print here

  int level = 1;

  queue < BinaryTreeNode < int > * > q;
  q.push(root);
  // stack<BinaryTreeNode<int>> s;

  solve(q, level);
}
   
