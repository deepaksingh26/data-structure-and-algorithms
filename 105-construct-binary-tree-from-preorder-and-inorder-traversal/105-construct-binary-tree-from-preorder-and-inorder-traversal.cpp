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
    TreeNode* construct(int start,int end,int &track,vector<int>& preorder,map<int,int>&mpp)
    {
        if(start>end)
            return nullptr;
        
        TreeNode * root=new TreeNode(preorder[track++]);
        
        int index=mpp[root->val];
        root->left=construct(start,index-1,track,preorder,mpp);
        root->right=construct(index+1,end,track,preorder,mpp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        
        map<int,int>mpp;
        
        int track=0;
        for(int i=0;i<n;i++)
            mpp[inorder[i]]=i;
        return construct(0,n-1,track,preorder,mpp);
    }
};