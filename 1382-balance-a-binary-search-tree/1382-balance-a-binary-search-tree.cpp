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
    void inorder(TreeNode* root,vector<int>&v)
    {
        if(!root)
            return ;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* buildtree(vector<int>&v,int l,int h)
    {
        if(l>h)
            return NULL;
        int mid=(l+h)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=buildtree(v,l,mid-1);
        root->right=buildtree(v,mid+1,h);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        int n=v.size();
        TreeNode* tree=buildtree(v,0,n-1);
        return tree;
        
        
    }
};