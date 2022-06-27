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
    void solve(TreeNode*root,int &sum,bool a=true)
    {
        if(!root)
            return ;
        solve(root->left,sum,true);
        if(root->left==NULL&&root->right==NULL&&a)
            sum+=root->val;
        solve(root->right,sum,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(!root)
            return 0;
        if(!root->left&&!root->right)
            return 0;
        int sum=0;
        solve(root,sum);
        return sum;
    }
};