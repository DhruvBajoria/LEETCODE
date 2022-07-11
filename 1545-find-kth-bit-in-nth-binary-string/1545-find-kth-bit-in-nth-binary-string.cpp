class Solution {
public:
    int solve(int n,int k)
    {
        if(n==1)
            return 0;
        int mid=pow(2,n-1);
        if(k<mid)
            return solve(n-1,k);
        else if(k==mid)
            return 1;
        return !solve(n-1,pow(2,n-1)-k+mid);
    
           
       
    }
    
    
    char findKthBit(int n, int k) {
        return (char)(solve(n,k)+'0');
    }
};