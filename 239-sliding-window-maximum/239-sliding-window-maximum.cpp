class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<int>pq,help;
        int n=nums.size();
        for(int i=0;i<k;i++)
        {
            pq.push(nums[i]);
        }
        vector<int>v;
        v.push_back(pq.top());
        for(int i=k;i<n;i++)
        {
            if(pq.top()==nums[i-k])
                pq.pop();
            else
                help.push(nums[i-k]);
            while(help.size()>0 && help.top()==pq.top())
            {
                help.pop();
                pq.pop();
            }
            pq.push(nums[i]);
            v.push_back(pq.top());
                
        }
        return v;
    }
};