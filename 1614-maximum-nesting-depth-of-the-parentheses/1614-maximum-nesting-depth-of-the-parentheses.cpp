#include<bits/stdc++.h>
class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int ma=0;
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                st.push('(');
            else if(s[i]==')')
                st.pop();
           if(ma<st.size())
               ma=st.size();
        }
        return ma;
        
    }
};