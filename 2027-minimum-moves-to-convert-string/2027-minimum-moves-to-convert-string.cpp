class Solution {
public:
    int minimumMoves(string s) {
        int i=0,cnt=0;
        int n=s.length();
        while(i<n)
        {
           
             if(s[i]=='X')
            {
               cnt++;
                i+=3; 
            }
            else{
            i++;
            }
        }
        return cnt;
    }
};