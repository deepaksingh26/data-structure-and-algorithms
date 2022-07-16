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
    bool trav(TreeNode* p,TreeNode* q)
    {
        if(p==nullptr&&q!=nullptr)
            return false;
        if(q==nullptr&&p!=nullptr)
            return false;
        if(!p&&!q)
            return true;
        if(p->val!=q->val||!p->left&&q->left||!p->right&&q->right)
            return false;
        return trav(p->left,q->left)&& trav(p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
       return trav(p,q);
    }
};