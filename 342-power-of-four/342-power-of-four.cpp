class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
            return true;
        if(n%4!=0||n==0)
            return false;
        if(isPowerOfFour(n/4))
            return true;
        return false;
        
    }
};