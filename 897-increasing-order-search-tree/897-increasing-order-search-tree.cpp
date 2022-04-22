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
    TreeNode* pre;
TreeNode* res;

void inorder(TreeNode* root)
{
    if(!root)
    {
        return ;
    }
    
    inorder(root->left);
    
    if(res==NULL)
    {
        res=root;
    }
    else
    {
        pre->right=root;
    }
    
    pre=root;
    root->left=NULL;
    
    inorder(root->right);
}
TreeNode* increasingBST(TreeNode* root) 
{
   inorder(root);
    return res;
    
}
};