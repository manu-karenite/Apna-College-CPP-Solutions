/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };
Given a tree and an integer x, find and return the number of nodes which contains data greater than x.
************************************************************/

int getLargeNodeCount(TreeNode < int > * root, int x) {
    // Write your code here

    //what if root is null , no chance of getting anuything
    if (root == NULL)
        return 0;

    //we are here means root is not null
    int answer = 0;
    //lets check root for this condition
    if (root -> data > x)
        answer++;

    //now lets do one thing , lets go for all the children and do the same
    int numOfChildren = root -> children.size();
    for (int i = 0; i < numOfChildren; i++)
        answer += getLargeNodeCount(root -> children.at(i), x);
    return answer;
}
