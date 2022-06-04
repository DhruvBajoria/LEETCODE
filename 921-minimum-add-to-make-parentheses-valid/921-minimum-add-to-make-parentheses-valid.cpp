class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<int>st;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push('(');
            else
            {
                if(st.size()>0)
                    st.pop();
                else
                    cnt++;
            }
        }
        return st.size()+cnt;
    }
};