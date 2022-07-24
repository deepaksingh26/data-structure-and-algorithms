/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      void trav(TreeNode *root,set<int>&st)
    {
        if(!root)
            return;
        trav(root->left,st);
        st.insert(root->val);
        trav(root->right,st);
    }
    int findSecondMinimumValue(TreeNode* root) {
         if(!root)
        return 0;
        set<int>st;
        trav(root,st);
        int i=0;
        for(auto it:st)
        {
            if(i==1)
                return it;
            i++;
        }
        return -1;
    }
};