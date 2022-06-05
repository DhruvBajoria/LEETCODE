class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long ans=(long(k)*long(k+1))/2;
        unordered_set<int>s;
        for(auto x:nums)
        {
            s.insert(x);
        }
        vector<int>help;
        for(auto x:s)
            help.push_back(x);
        sort(help.begin(),help.end());
        for(int i=0;i<help.size();i++)
        {
            if(help[i]<=k)
            {
                ans-=help[i];
                ans+=k+1;
                k++;
            }
        }
        
        
        
      return ans;  
        
    }
};