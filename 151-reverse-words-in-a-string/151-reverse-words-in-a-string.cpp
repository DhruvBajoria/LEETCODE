class Solution {
public:
    string reverseWords(string s) {
   int n=s.size();
        stack<string>st;
        for(int i=0;i<s.length();i++)
        {
            string word;
            if(s[i]==' ')
                continue;
            while(i<s.size()&&s[i]!=' ')
            {
                word+=s[i];
                i++;
            }
            st.push(word);
            
        }
        string res;
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
            if(!st.empty())
            res+=" ";
        }
       
        return res;
    }
};