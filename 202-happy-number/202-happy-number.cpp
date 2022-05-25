class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==7)
            return true;
        if(n<10)
            return false;
        int last=0,num=0;
        while(n)
        {
            last=n%10;
            num=num+last*last;
            n/=10;
        }
        return isHappy(num);
 
    }
};