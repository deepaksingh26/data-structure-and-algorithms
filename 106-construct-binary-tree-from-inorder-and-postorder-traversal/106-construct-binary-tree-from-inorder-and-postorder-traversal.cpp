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
    TreeNode* construct(int start,int end,int &track,vector<int>& postorder, map<int,int>&mpp)
    {
        if(start>end)
            return nullptr;
        
        TreeNode *root= new TreeNode(postorder[track--]);
        int index=mpp[root->val];
        root->right=construct(index+1,end,track,postorder,mpp);
        root->left=construct(start,index-1,track,postorder,mpp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
            mpp[inorder[i]]=i;
        int track=n-1;
        return construct(0,n-1,track,postorder,mpp);
    }
};