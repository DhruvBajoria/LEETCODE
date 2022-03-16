class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>v;
        for(int i=0;i<words.size();i++)
        {
            string a=words[i];
            for(int j=0;j<words.size();j++)
            {
                
                string b=words[j];
                if(i!=j)
                {
                    if(b.find(a)!=-1)
                        v.insert(a);
                }
              
            }
        }
        vector<string>ans;
        for(auto x:v)
            ans.push_back(x);
        return ans;
    }
};