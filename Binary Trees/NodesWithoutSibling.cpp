//  Nodes without sibling
// Send Feedback
// For a given Binary Tree of type integer, print all the nodes without any siblings.
// Input Format:

// The first and the only line of input will contain the node data, all separated by a single space. Since -1 is used as an indication whether the left or right node data exist for root, it will not be a part of the node data.

// Output Format:

// The only line of output prints the node data in a top to down fashion with reference to the root. 
// Node data in the left subtree will be printed first and then the right subtree.
// A single space will separate them all.

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
    //lets write the base case first
    if(root==NULL)
        return;
    
    //we have to see with respect to the root first
    //here root is obviously not null
    
    bool leftNull  = (root->left==NULL)? true:false;
    bool rightNull = (root->right==NULL)? true:false;
    
    if((leftNull ^ rightNull)==true)
    {
        //means that one was true and other was not tryue
        //perfect condition
        if(root->left)
            cout<<root->left->data<<" ";
        else
            cout<<root->right->data<<" ";
    }
     //call recursion
    printNodesWithoutSibling(root->left);
    printNodesWithoutSibling(root->right);
}
