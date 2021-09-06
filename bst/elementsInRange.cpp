 /*Given a Binary Search Tree and a range [low, high]. Find all the numbers in the BST that lie in the given range.
Note: Element greater than or equal to root go to the right side.

Example 1:

Input:
       17
     /    \
    4     18
  /   \
 2     9 
l = 4, h = 24
Output: 4 9 17 18 */
 
 
 vector<int> printNearNodes(Node *root, int low, int high) {
        //code here   
        vector<int> v;
        
        if(root==NULL)
            return v; //return an emoty vector
            
        //now root is not null
        int anss = -1;
        if(root->data>=low && root->data<=high)
        {
            //root is to be included
            anss = root->data;
            
        }
        
        //now get two vectors from left and right
        vector<int> leftt;
        vector<int> rightt;
        
        if(root->data>=low)
            leftt = printNearNodes(root->left, low,high);
         if(root->data<=high)
            rightt= printNearNodes(root->right, low,high);
            
        vector<int> ans;
        for(int i=0;i<leftt.size();i++)
            ans.push_back(leftt.at(i));
        
        if(anss!=-1)
            ans.push_back(anss);
        for(int i=0;i<rightt.size();i++)
            ans.push_back(rightt.at(i));
            
        return ans;
        
        
    }