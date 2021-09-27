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
Given two generic trees, return true if they are structurally identical. Otherwise return false.
Structural Identical
If the two given trees are made of nodes with the same values and the nodes are arranged in the same way, then the trees are called identical.
************************************************************/

bool areIdentical(TreeNode < int > * root1, TreeNode < int > * root2) {
    // Write your code here
    //what if one is null and other is not
    bool null1 = (root1 == NULL) ? true : false;
    bool null2 = (root2 == NULL) ? true : false;
    if (null1 ^ null2)
        //means 1 is true and other is false
        return false;

    //what if both are null , null trees are obviously identical
    if (null1 & null2)
        return true;

    // now both are not null , so we need to check now
    //what if the roots have different data?
    //theny they are not structurally identically
    if (root1 -> data != root2 -> data)
        //we can straightaway return false from here
        // no need to check further
        return false;

    //now , both have same data
    //next step -> check for number of children
    int child1 = root1 -> children.size();
    int child2 = root2 -> children.size();

    //what if both have different number of children , then obviously not identical
    if (child1 != child2)
        return false;

    //when number of children are always same
    //now we should let recursion handke the issues
    for (int i = 0; i < child1 /*child1 or child2, both are same*/ ; i++) {
        bool answer = areIdentical(root1 -> children.at(i), root2 -> children.at(i));
        if (answer == false)
            return false;
    }
    //if nothing happens
    return true;

}
