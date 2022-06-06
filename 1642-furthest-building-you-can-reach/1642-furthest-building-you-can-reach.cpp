class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int n=h.size();
        int i=0;
     priority_queue<int>pq;
        for(i;i<n-1;i++)
        {
            if(h[i+1]<=h[i])
                continue;
            int d=h[i+1]-h[i];
            if(d<=b)
            {
                b-=d;
                pq.push(d);
            }
            else if(l>0)
            {
                if(pq.size())
                {
                    int a=pq.top();
                    if(a>d)
                    {
                        b+=a;
                        pq.pop();
                        b-=d;
                        pq.push(d);
                    }
                }
                l--;
            }
            else
                break;
        }
        return i;
    }
};