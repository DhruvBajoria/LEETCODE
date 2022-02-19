class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
           int n=nums.size();
        priority_queue<int> pq;
        int mi=INT_MAX;
        
        for(int i=0;i<n;i++){
            // changing odd to even and also storing to the priority_queue.
            if(nums[i]%2!=0)
                nums[i]*=2;
            pq.push(nums[i]);
            // finding minimum element 
            mi=min(nums[i],mi);
        }
        int ans=INT_MAX;
        //always find max untill max/2!=0
        while(pq.top()%2==0){
            // removing the max element from the priority queue and finding the diff.
            int ma=pq.top();
            pq.pop();
            ans=min(ans,ma-mi);
            //updating the minimum.
            mi=min(mi,ma/2);
            //pushing max/2 to the MAX-HEAP.
            pq.push(ma/2);
        }
        return min(ans,pq.top()-mi);
    }
};