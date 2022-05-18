class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int n=nums.size();
        if(n==0)
            return 0;
        int ans=0;
        map<int,int>m;
        int currsum=0;
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            currsum+=nums[i];
            int rem=currsum%k;
            if(rem<0)
                rem+=k;
            if(m.find(rem)!=m.end())
            {
                ans+=m[rem];
            }
            m[rem]++;
        }
        return ans;
    }
};

// int n=nums.size();
//         if(n==0)
//             return 0;
       
//         map<int,int>m;
//         m[0]=1;
//         int i=0,count=0,currsum=0;
//         while(i<n)
//         {
//             currsum+=nums[i];
//             int rem=currsum%k;
//             if(rem<0)
//                 rem+=k;
//             if(m.find(rem)!=m.end())
//                 count+=m[rem];
//             m[rem]++;
//             i++;
        
//         }
//         return count;