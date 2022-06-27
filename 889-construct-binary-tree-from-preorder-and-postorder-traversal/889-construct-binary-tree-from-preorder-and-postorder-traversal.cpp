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
    TreeNode* tree(vector<int>&pre,int psi,int pei,vector<int>&post,int ppsi,int ppei)
    {
        if(psi>pei||ppsi>ppei)
            return NULL;
        
        TreeNode* root=new TreeNode(pre[psi]);
        if(psi==pei)
            return root;
        
        int idx=ppsi;
        while(post[idx]!=pre[psi+1])
            idx++;
        int nleft=idx-ppsi+1;
        
        root->left=tree(pre,psi+1,psi+nleft,post,ppsi,idx);
        root->right=tree(pre,psi+nleft+1,pei,post,idx+1,ppei);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n=preorder.size();
        return tree(preorder,0,n-1,postorder,0,n-1);
    }
};