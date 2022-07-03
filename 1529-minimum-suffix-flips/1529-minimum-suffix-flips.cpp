class Solution {
public:
    int minFlips(string target) {
        int n=target.size();
        bool flag=false;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(target[i]=='0'&&flag==false)
            {
                continue;
            }
            else if(target[i]=='1'&&flag==true)
                continue;
            else if(target[i]=='0'&&flag==true)
            {
                cnt++;
                flag=false;
            }
            else if(target[i]=='1'&&flag==false)
            {
                cnt++;
                flag=true;
            }
        }
        return cnt;
        
    }
};