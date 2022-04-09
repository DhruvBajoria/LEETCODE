class Solution {
public:
    long long max(long long x,long long y)
    {
        if(x>y)
            return x;
        return y;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long l=0;
        long long s=0;
        for(auto x:candies)
        {
            s+=x;
            
        }
        long long r=s/k;
        r++;
       long long ans=0;
        while(l<r)
        {
            int mid=(l+r)/2;
            if(mid==0)
                return 0;
            long long cnt=0;
            for(int i=0;i<candies.size();i++)
            {
                long long x=candies[i];
                cnt+=x/mid;
                
            }
            if(cnt>=k)
            {
              ans=max(ans,mid);
                l=mid+1;
            }
            else
            {
                r=mid;
            }
        }
        return ans;
    }
};