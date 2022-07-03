class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int cnt=0;
        for(auto x:s)
        {
            if(x==')'&&st.empty())
            {
                cnt++;
            }
           else if(x=='(')
                st.push('(');
            else if(x==')'&&st.empty()==false)
                st.pop();
            
        }
        return st.size()+cnt;
        
    }
};