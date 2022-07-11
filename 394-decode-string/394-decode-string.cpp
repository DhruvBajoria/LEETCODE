class Solution {
public:
    string decodeString(string s) {
        string ans="";
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            if(c!=']')
            {
                st.push(c);
            }
            else
            {
                string help="";
                while(!st.empty()&&st.top()!='[')
                {
                    help+=st.top();
                    st.pop();
                }
                st.pop();
                string num="";
                while(!st.empty()&&isdigit(st.top()))
                {
                    num=st.top()+num;
                    st.pop();
                }
                
                int n=stoi(num);
                for(int i=0;i<n;i++)
                {
                    for(int j=help.length()-1;j>=0;j--)
                    {
                        st.push(help[j]);
                    }
                }
                
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};