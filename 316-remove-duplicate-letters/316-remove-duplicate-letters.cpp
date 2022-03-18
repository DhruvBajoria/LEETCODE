class Solution {
public:
    string removeDuplicateLetters(string s) {
   unordered_map<char,int>m;
        vector<bool>vis(26,false);
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            /* If some char is all vis (i.e already present is stack), decrement the freq and continue */
            if(vis[s[i]-'a']==true)
            {
                m[s[i]]--;
                continue;
            }
            while(!st.empty() and st.top()>s[i] and m[st.top()]>=1)
            {
                vis[st.top()-'a']=false;
                st.pop();
            }
             /* push curr char to stack, decrement freq and mark it vis */
            st.push(s[i]);
            m[s[i]]--;
             vis[s[i]-'a']=true;
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};