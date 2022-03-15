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
   bool isBalanced(TreeNode* root) {
        if (! root) 
            return true;
        if (abs(height(root->left)-height(root->right)) >1)
            return false;
        return isBalanced(root->left) and isBalanced(root->right);
    }
    // helper function to determine the height of a tree.
    int height(TreeNode* root)
    {
        if (! root)
            return 0;
        return max(height(root->left),height(root->right))+1;
    }
};