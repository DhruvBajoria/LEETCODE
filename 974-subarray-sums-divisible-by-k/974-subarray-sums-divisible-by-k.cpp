class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
            return 0;
       
        map<int,int>m;
        m[0]=1;
        int i=0,count=0,currsum=0;
        while(i<n)
        {
            currsum+=nums[i];
            int rem=currsum%k;
            if(rem<0)
                rem+=k;
            if(m.find(rem)!=m.end())
                count+=m[rem];
            m[rem]++;
            i++;
        
        }
        return count;
    }
};