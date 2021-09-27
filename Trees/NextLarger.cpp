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
Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
Note: Return NULL if no node is present with the value greater than n.
************************************************************/
#include <climits>

pair < TreeNode < int > * , int > solve(TreeNode < int > * root, int x) {
    //what if the root is null ?
    //it has wider meaning here
    //means first of all , node is null
    //for value-> -infinity;
    if (root == nullptr) {
        pair < TreeNode < int > * , int > p;
        p.first = NULL;
        p.second = INT_MAX;
        return p;
    }

    //now root is not null
    //lets check for the root , and check whether it falls in this categpry or not
    //lets make a separate pair for this
    pair < TreeNode < int > * , int > answer;
    //lets initialise it
    answer.first = NULL;
    answer.second = INT_MAX;

    if (root -> data > x) {
        //make root this answer now, 
        answer.first = root;
        answer.second = root -> data;
    }

    //now lets call recursion of children
    //they will come with answers, compare and return
    int numOfChildren = root -> children.size();
    for (int i = 0; i < numOfChildren; i++) {
        pair < TreeNode < int > * , int > current = solve(root -> children.at(i), x);
        //suppose it has brough its own answer of its subtree including itself
        if (current.second > x && current.second < answer.second)
            answer = current;
    }
    return answer;
}
TreeNode < int > * getNextLargerElement(TreeNode < int > * root, int x) {
    // Write your code here
    return solve(root, x).first;
}
