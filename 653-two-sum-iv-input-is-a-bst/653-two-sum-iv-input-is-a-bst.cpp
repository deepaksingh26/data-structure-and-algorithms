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
    bool findTarget(TreeNode* root, int target)
    {
       vector<int>v;
       trav(root,v);
        sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++)
     {
         for(int j=i+1;j<v.size();j++)
         {
             if(v[j]==target-v[i])
                 return true;
         }
     }
        return false;
    }
};