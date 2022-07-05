class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==']'&&!st.empty())
                st.pop();
            else if(s[i]=='[')
            {
                st.push('[');
            }
        }
        return (st.size()+1)/2;
    }
};