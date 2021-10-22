//  Check if a Binary Tree is BST
// Send Feedback
// Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree). If yes, return true, return false otherwise.
// Note: Duplicate elements should be kept in the right subtree.

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
//pair <isBST? pair<maximum,minimum>
#include <climits>
pair<bool,pair<int,int>> solve(BinaryTreeNode<int> *root)
{
    //what if the root is not null ?
    //obviously the answer will br true , because empty tree is bst
    pair<bool,pair<int,int>> answer;
    if(root==NULL)
    {
        answer.first = true;
        answer.second.first = INT_MIN;
        answer.second.second = INT_MAX;
        return answer;
    }
    //otherwise the root is not null 
    //what to do?
    // get the answer from both the subtrees
    //manipulate the max and min from both trees
    pair<bool,pair<int,int>> l = solve(root->left);
    pair<bool,pair<int,int>> r = solve(root->right);
    
//     //we have got the both answers;
//     //okay answer is done
//     //we hav to send the combined answer from l , root and r
    
//     //for maximum of all
//     answer.second.first = max (l.second.first,max(root->data,r.second.first));
//     answer.second.second = min(l.second)
    
    bool leftLess = ((root->left!=NULL && root->data>l.second.first) | (root->left ==NULL))? true:false;
    bool rightGreat = ((root->right!=NULL && root->data <= r.second.second) |(root->right ==NULL))  ? true:false;

    answer.first = l.first && r.first && leftLess && rightGreat;
    
    //now manipulate the values
    answer.second.first=max(l.second.first,max(root->data,r.second.first));
    answer.second.second = min(l.second.second,min(root->data,r.second.second));
    
    return answer;

}
bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here
    pair<bool,pair<int,int>> answer = solve(root);
    return answer.first;
}
