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
    bool isequal(TreeNode* p,TreeNode* q)
    {
        if(!p&&!q)
            return true;
        else if(!p||!q)
            return false;
        return isequal(p->right,q->left)&&isequal(p->left,q->right)&&p->val==q->val;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        if(!root->left&&!root->right)
            return true;
        return isequal(root->left,root->right);
    }
};