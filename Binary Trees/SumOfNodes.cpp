// For a given Binary Tree of integers, find and return the sum of all the nodes data.
//                         10
//                       /      \
//                     20      30
//                    /    \
//                  40    50

// When we sum up all the nodes data together, [10, 20, 30, 40 50] we get 150. Hence, the output will be 150.

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

int getSum(BinaryTreeNode < int > * root) {
  // Write your code here

  if (root == NULL)
    return 0;

  int sum = root -> data;
  sum += getSum(root -> left);
  sum += getSum(root -> right);
  return sum;
}
