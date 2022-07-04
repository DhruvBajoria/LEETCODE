class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,t=0;
        for(auto x:bills)
        {
            if(x==5)
            {
                f++;
            }
            else if(x==10)
            {
                if(f==0)
                    return false;
                else
                {
                    f--;
                    t++;
                }
            }
            else
            {
                if(f>=1&&t>=1)
                {
                    f--;
                    t--;
                }
                else if(f>=3)
                {
                    f-=3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};