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
    void trav(TreeNode* root,vector<int>&v)
    {
        if(!root)
            return;
        trav(root->left,v);
        v.push_back(root->val);
        trav(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        vector<int>temp;
        trav(root,v);
        int n=v.size();
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]<=v[i]) return false;
        }
        
        return true;
    }
};