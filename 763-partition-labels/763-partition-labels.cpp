class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>a(26,0);
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-'a']=i;
        }
        int last=0;
        int maxi=-1;
        vector<int>ans;
        for(int i=0;i<s.length();i++)
        {
            maxi=max(maxi,a[s[i]-'a']);
            if(i==maxi)
            {
                ans.push_back(i-last+1);
                last=i+1;
            }
        }
        return ans;
    }
};