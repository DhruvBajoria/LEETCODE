class Solution {
public:
    vector<int> diffWaysToCompute(string e) {
        vector<int>v;
        for(int i=0;i<e.length();i++)
        {
            char c=e[i];
            if(c=='-'||c=='*'||c=='+')
            {
                string h=e.substr(0,i);
                string hh=e.substr(i+1);
                vector<int>l=diffWaysToCompute(h);
                vector<int>r=diffWaysToCompute(hh);
                for(auto x:l)
                {
                    for(auto y:r)
                    {
                        if(c=='-')
                        {
                            v.push_back(x-y);
                        }
                        else if(c=='+')
                        {
                            v.push_back(x+y);
                        }
                        else if(c=='*')
                            v.push_back(x*y);
                        }
                    }
                }
            }
             
        
        if(v.size()==0)
            v.push_back(stoi(e));
    return v;
    }
};