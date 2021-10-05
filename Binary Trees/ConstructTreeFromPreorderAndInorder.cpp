// For a given preorder and inorder traversal of a Binary Tree of type integer stored in an array/list, create the binary tree using the given two arrays/lists. You just need to construct the tree and return the root.
// Note:
// Assume that the Binary Tree contains only unique elements. 

/***********************************************************
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
// int getIndex(int inorder[],int si, int ei, int x)
// {
//     for(int i=si;i<=ei;i++)
//     {
//         if(inorder[i]==x)
//             return i; //we need to return the index
//     }
// }

// BinaryTreeNode<int>* build(int *preorder, int preLength, int *inorder, int inLength,int inStart, int inEnd, int rootAtIndex)
// {
//     //create the root first
//     if(inStart>inEnd)
//         return NULL;
//     BinaryTreeNode<int>* root = new BinaryTreeNode<int> (preorder[rootAtIndex]); //root will always be built from the preorder array ***
//     //now what?
//     //find this element lies where in the inorder
//     //ultimately , we want to curtail the inorder in every step

//     int searchedIndex=getIndex(inorder,inStart,inEnd,preorder[rootAtIndex]);
//     //signature of the fn -> inorder , starting index, emding index, element to find

//     //now we call the recursion to attach to the left and right
//     //increase the rootAtIndex part
//     //rootAtIndex++;

//     //lets manipulate the inorder for left subtree
//     // inStart is not changed
//     //inEnd = searchedIndex-1;
//     inLength=inEnd-inStart+1;
// 	root->left = build(preorder,preLength,inorder,inLength,inStart,searchedIndex-1,rootAtIndex+1);

//     //for right tree
//     inLength = inEnd-(searchedIndex+1)+1;

//     root->right = build(preorder,preLength,inorder,inLength,searchedIndex+1,inEnd,searchedIndex+1);

//     return root;

// }
// BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
//     static int rootAtIndex =0; 
//     // Write your code here
//     //preorder and inorder is given
//     //okay
//     //we dont have to care anything about the lenght and base case bcoz , n>=1 in the constraints

//     int inStart = 0;
//     int inEnd = inLength-1;
//     inLength = inEnd-inStart+1;

//     BinaryTreeNode<int>* root = build(preorder,preLength,inorder,inLength,inStart,inEnd,rootAtIndex);
//     return root;
// }

int getIndex(int inorder[], int si, int ei, int x) {
  for (int i = si; i <= ei; i++) {
    if (inorder[i] == x)
      return i; //we need to return the index
  }
}
BinaryTreeNode < int > * build(int * preorder, int preStart, int preEnd, int * inorder, int inStart, int inEnd) {
  if (inStart > inEnd)
    return NULL;

  BinaryTreeNode < int > * root = new BinaryTreeNode < int > (preorder[preStart]);

  //get the value from the inorder
  int searchedIndex = getIndex(inorder, inStart, inEnd, root -> data);

  // calculate the pre and in of Left Subtree
  // prestart = prestart+1;
  // inStart= no change
  // inEnd = searchedIndex-1;
  // preEnd = prestart+inEnd-inStart+1
  root -> left = build(preorder, preStart + 1, preStart + (searchedIndex - 1 - inStart) + 1, inorder, inStart, searchedIndex - 1);
  // calculate the pre and in of Left Subtree
  // prestart = preStart+(searchedIndex-1-inStart)+1+1 last +1 to next element
  // inStart= searchedIndex+1;
  // inEnd = no change
  // preEnd = no change
  root -> right = build(preorder, preStart + (searchedIndex - 1 - inStart) + 1 + 1, preEnd, inorder, searchedIndex + 1, inEnd);
  return root;

}
BinaryTreeNode < int > * buildTree(int * preorder, int preLength, int * inorder, int inLength) {
  int inStart = 0;
  int inEnd = inLength - 1;
  // inLength = inEnd-inStart+1;

  int preStart = 0;
  int preEnd = preLength - 1;
  // preLength = preEnd-preStart+1;

  BinaryTreeNode < int > * root = build(preorder, preStart, preEnd, inorder, inStart, inEnd);
  return root;
}
