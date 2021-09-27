/*
Print Level Wise
Send Feedback
Given a generic tree, print the input tree in level wise order.
For printing a node with data N, you need to follow the exact format -
N:x1,x2,x3,...,xn
where, N is data of any node present in the generic tree. x1, x2, x3, ...., xn are the children of node N. Note that there is no space in between.
You need to print all nodes in the level order form in different lines.
*/
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

************************************************************/
#include <queue>
void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    //base case ? when root is null
    if(root==nullptr)
        {
            //dont need to do anything
            return;
        }
        
	//we need a queue
    queue<TreeNode<int>*> q;
    //lets insert this root inyo queue
    q.push(root);
    
    //check for the loop condition now
    while(q.empty()==false) //q is not empty then
    {
        //how to storethe front node
        TreeNode<int> * front = q.front();
        //removal from queue
        q.pop();
        
        //first print this nodes data
        cout<<front->data<<":";
        
        //now read all the children and output the value at the same time
        for(int i=0;i<front->children.size();i++)
        {
            if(i==front->children.size()-1)
            	cout<<front->children.at(i)->data;
            else
                cout<<front->children.at(i)->data<<",";
            q.push(front->children.at(i));
        }
        //after that change line
        cout<<endl;
    }
    
    
}
