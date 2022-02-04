class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>m;
        m[0]=-1;
        int count=0,max_len=0;
        for(int i=0;i<nums.size();i++)
        {
            count+=((nums[i]==1)?1:-1);
            if(m.find(count)!=m.end())
            {
                max_len=max(max_len,i-m[count]);
            }
            else{
                m[count]=i;
            }
            
            
        }
        return max_len;
        
    }
};