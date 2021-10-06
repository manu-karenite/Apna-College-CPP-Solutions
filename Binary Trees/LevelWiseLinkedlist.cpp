// Given a binary tree, write code to create a separate linked list for each level. You need to return the array which contains head of each level linked list.
// Input format :
// The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.

/**********************************************************

	Following are the Binary Tree Node class structure and
	the Node class structure

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
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};

***********************************************************/
#include <queue>

vector < Node < int > * > constructLinkedListForEachLevel(BinaryTreeNode < int > * root) {

  // Write your code here
  vector < Node < int > * > LL;

  //what to do if root is null,
  //return empty vector
  if (root == NULL)
    return LL;

  //we are here means root is not null , atleast one element is here
  queue < BinaryTreeNode < int > * > q;
  //insert root in q
  //q.push(nullptr);
  q.push(root);
  q.push(NULL);
  //now we can manipulate the q part
  Node < int > * head = NULL;
  Node < int > * tail = NULL;
  while (q.empty() == false) {
    //loop exists till there are no elements left
    BinaryTreeNode < int > * front = q.front();

    //when front is not null , prepare to make a new LL
    if (front != NULL && front -> left != NULL)
      q.push(front -> left);
    if (front != NULL && front -> right != NULL)
      q.push(front -> right);

    if (front != NULL) {
      //create a new node

      Node < int > * newNode = new Node < int > (front -> data);
      if (head == NULL) {
        head = newNode;
        tail = newNode;
      } else {
        //means head is already something
        //so
        tail -> next = newNode;
        tail = newNode;
      }
    } else {
      //means front is null now
      //so means LL is now over

      LL.push_back(head);
      head = NULL;
      tail = NULL;

      if (q.size() > 1) //only null is not  there
        q.push(NULL);

    }
    q.pop();

  }
  return LL;

}
