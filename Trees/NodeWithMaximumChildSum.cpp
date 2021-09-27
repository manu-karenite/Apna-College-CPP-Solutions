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
Given a generic tree, find and return the node for which sum of its data and data of all its child nodes is maximum.
In the sum, data of the node and data of its immediate child nodes has to be taken.
************************************************************/
#include <climits>

pair < TreeNode < int > * , int > maxSumNode1(TreeNode < int > * root) {
    if (root == NULL) {
        pair < TreeNode < int > * , int > p;
        p.first = NULL;
        p.second = INT_MIN;
        return p;
    }

    int numOfChildren = root -> children.size();

    //it will be good if we store the node and corresponding sum in a pair class
    pair < TreeNode < int > * , int > currentLargest;
    currentLargest.first = root;
    int sum = root -> data;
    for (int i = 0; i < numOfChildren; i++)
        sum += root -> children.at(i) -> data;
    currentLargest.second = sum;

    //okay lets check for the children second
    //step3: calling recursion

    // we need an array to store the so called max sum nodes
    //type of array -> to store pair class
    pair < TreeNode < int > * , int > arr[numOfChildren];

    //lets bring the ans in all this
    for (int i = 0; i < numOfChildren; i++) {
        pair < TreeNode < int > * , int > answer = maxSumNode1(root -> children.at(i));
        arr[i] = answer;
    }

    //now time to compare and return;
    for (int i = 0; i < numOfChildren; i++) {
        if (currentLargest.second < arr[i].second)
            currentLargest = arr[i];
    }

    //return part
    return currentLargest;
}

TreeNode < int > * maxSumNode(TreeNode < int > * root) {
    // Write your code here
    //what if the tree is null or empty
    //we obviously return null
    return maxSumNode1(root).first;

}
