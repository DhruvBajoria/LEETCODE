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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       
        vector<vector<int>>v1;
        if(!root)
            return v1;
        queue<TreeNode*>q;
        q.push(root);
        int f=1;
        while(q.empty()==false)
        {
             vector<int>v;
            int count=q.size();
            while(count--)
            {
                TreeNode* curr=q.front();
                v.push_back(curr->val);
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
            }
            if(f%2==0)
                reverse(v.begin(),v.end());
            v1.push_back(v);
            f=!f;
        }
        return v1;
    }
};