class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto x:arr)
        {
            mp[x]++;
        }
        
        vector<int>help;
         for(auto x:mp)
         {
             help.push_back(x.second);
         }
        sort(help.begin(),help.end());
        for(int i=0;i<help.size();i++)
        {
            int a=min(help[i],k);
            help[i]-=a;
            k-=a;
            if(k==0)
                break;
        }
        int cnt=0;
        for(int i=0;i<help.size();i++)
        {
            if(help[i]!=0)
                cnt++;
        }
        return cnt;
        
    }
};