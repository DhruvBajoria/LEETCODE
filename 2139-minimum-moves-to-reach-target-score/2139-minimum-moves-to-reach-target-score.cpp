class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int cnt=0;
        while(target!=1)
        {
            if(target%2==0&&maxDoubles)
            {
                target/=2;
                maxDoubles--;
                cnt++;
            }
            else
            {
                if(maxDoubles==0)
                {
                    cnt+=target-1;
                    return cnt;
                }
               else
               {
                   target-=1;
                   cnt++;
               }
            }
        }
        return cnt;
    }
};