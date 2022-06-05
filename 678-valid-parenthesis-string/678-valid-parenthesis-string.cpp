class Solution {
public:
    bool checkValidString(string s) {
        int cnt=0;
        stack<char>opn,str;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                opn.push(i);
            else if(s[i]=='*')
                str.push(i);
            else
            {
                if(!opn.empty())
                    opn.pop();
                else if(!str.empty())
                    str.pop();
                else
                    return false;
            }
        }
        
        while(!opn.empty())
        {
            if(str.empty())
                return false;
            else if(opn.top()<str.top())
            {
                opn.pop();
                str.pop();
            }
            else
                return false;
        }
        return true;
  
    }
};