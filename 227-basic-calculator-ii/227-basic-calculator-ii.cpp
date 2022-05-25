class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        char sign='+';
        int res=0,temp=0;
        for(unsigned int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                temp=10*temp+(s[i]-'0');
            }
            if(!isdigit(s[i])&&!isspace(s[i])||i==s.size()-1)
            {
                if(sign=='-')
                    st.push(-temp);
                else if(sign=='+')
                    st.push(temp);
                else {
                    int num=0;
                    if(sign=='*')
                    {
                        num=st.top()*temp;
                    }
                    else
                    {
                        num=st.top()/temp;
                    }
                    st.pop();
                    st.push(num);
                }
                sign=s[i];
                temp=0;
            }
        }
        while(st.empty()==false)
        {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};