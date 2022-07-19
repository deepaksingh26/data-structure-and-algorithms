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
    int maxi=INT_MIN;
    int trav(TreeNode* root,int &ans)
    {
        if(!root)
            return 0 ;
        int l=max(0,trav(root->left,ans));
        int r=max(0,trav(root->right,ans));
        maxi=max(maxi,l+r+root->val);
       return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        
        trav(root,maxi);
        return maxi;
    }
};