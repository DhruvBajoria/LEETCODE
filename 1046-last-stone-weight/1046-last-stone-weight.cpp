class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        int n=s.size();
        if(n==1)
            return s[0];
        if(n==2)
            return abs(s[0]-s[1]);
       priority_queue<int>pq;
        for(auto x:s)
        {
            pq.push(x);
        }
        while(pq.size()!=1)
        {
            int m=pq.size();
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            if(a==b)
            {
                if(m==2)
                    return 0;
                else
                    continue;
                     
            }
            else
            {
                pq.push(abs(a-b));
            }
              
        }
        return pq.top();
        
    }
};