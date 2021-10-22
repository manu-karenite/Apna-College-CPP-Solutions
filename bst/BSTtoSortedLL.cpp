//  Code: BST to Sorted LL
// Send Feedback
// Given a BST, convert it into a sorted linked list. You have to return the head of LL.
// Input format:

// The first and only line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space.
// If any node does not have left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.   

// Output Format:

// The first and only line of output prints the elements of sorted linked list.


/**********************************************************

	Following are the Binary Tree Node class structure and the 
	Node class structure

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

	template <typename T>
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};

***********************************************************/

Node < int > * constructLinkedList(BinaryTreeNode < int > * root) {
  // Write your code here
  if (root == NULL)
    return NULL;
  //because no LL can be formed

  //let's create a node for the root part
  Node < int > * newNode = new Node < int > (root -> data);

  //now root is not  Null;
  //let's get the head of the LL from left subtree
  Node < int > * l = constructLinkedList(root -> left);

  // l contains the head of LL
  Node < int > * temp = NULL;
  if (l == NULL) {
    l = newNode;
    temp = newNode;
  } else if (l != NULL) {
    temp = l;
    while (temp -> next != NULL) {
      temp = temp -> next;
    }
    //after this temp is on the last node

    //attahc it to the end of the above LL;
    temp -> next = newNode;
    temp = newNode;
  }

  //temp now points on the last node of left LL plus root

  //now get the head of LL from the right subtree

  Node < int > * r = constructLinkedList(root -> right);

  //attach the temp to this
  temp -> next = r;

  //return what?
  // l?
  return l;

}
