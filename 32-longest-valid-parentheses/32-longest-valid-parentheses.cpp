class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int res=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if(st.size()>0)
                {
                    res=max(res,i-st.top());
                }
                else
                {
                    st.push(i);
                }
            }
        }
        return res;
        
    }
};