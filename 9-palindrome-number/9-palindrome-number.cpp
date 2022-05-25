class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long y=0,rem,original=x;
        while(x>0)
        {
            rem=x%10;
            y=(y*10)+rem;
            x=x/10;
        }
        if(original==y)
            return true;
        else
        return false;
        
    }
};