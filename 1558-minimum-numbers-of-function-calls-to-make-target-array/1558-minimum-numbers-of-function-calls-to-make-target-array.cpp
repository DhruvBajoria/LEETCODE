class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0,malen=1;
        int n=nums.size();
        
        for(auto x:nums)
        {
            int bits=0;
            while(x>0)
            {
                cnt+=x&1;
                bits++;
                x=x>>1;
            }
            malen=max(malen,bits);
        }
        return malen+cnt-1;
    
        
        
    }
};