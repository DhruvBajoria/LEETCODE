class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
            return 0;
        unordered_map<int,int>m;
        int count=0,i=0,currsum=0;
        while(i<n)
        {
            currsum+=nums[i];
            
            if(currsum==k)
                count+=1;
            
            if(m.find(currsum-k)!=m.end())
                count+=m[currsum-k];
            m[currsum]+=1;
             i++;
            
        }
        return count;
    }
};