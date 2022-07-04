class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
       
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int cnt=0;
        while(!pq.empty())
        {
            int d=pq.top();
            pq.pop();
            int e=pq.top();
            pq.pop();
            d-=1;
            e-=1;
            cnt++;
            if(d!=0)
                pq.push(d);
            if(e!=0)
                pq.push(e);
            if(pq.size()==1)
                break;
        }
        
        return cnt;
        
    }
};