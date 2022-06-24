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
    static bool comp(pair<TreeNode*,int>p1,pair<TreeNode*,int>p2)
    {
        return p1.first->val<p2.first->val;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<int>v;
        vector<vector<int>>ans;
        if(!root)
        return ans;
        vector<pair<TreeNode*,int>>q;
      
        map<int,vector<int>>mp;
        q.push_back({root,0});
        while(!q.empty())
        {
            sort(q.begin(),q.end(),comp);
            int siz=q.size();
            for(int i=0;i<siz;i++)
            {
            auto it=q[0];
            q.erase(q.begin());
            TreeNode *node=it.first;
            int line=it.second;
            
            mp[line].push_back(node->val);
            
            if(node->left)
            q.push_back({node->left,line-1});
            if(node->right)
            q.push_back({node->right,line+1});
            }
        }
        
       for(auto x:mp)
       {
          vector<int>v=x.second;
          
           ans.push_back(v);
       }
       return ans;
    }
};