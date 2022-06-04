class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans;
        int n=s.length();
        int i=0;
        while(i<n)
        {
            if(s[i]=='(')
            {
                st.push('(');
                if(st.size()>1)
                    ans+=s[i];
            }
            else
            {
                st.pop();
                if(st.size()>0)
                {
                    ans+=s[i];
                }
            }
            i++;
        }
        return ans;

    }
};