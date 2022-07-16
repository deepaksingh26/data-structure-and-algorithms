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
     int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left&&!root->right)
            return 1;
          return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
    void trav(TreeNode* root)
    {
        if(!root)
            return;
        if(root->left)
            trav(root->left);
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        maxi=max(maxi,l+r);
        if(root->right)
            trav(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root)
    {
        if(!root)
            return 0;
        trav(root);
        return maxi;
    }
};