class Solution {
public:
    bool isprime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
            
        }
        return true;
    }
     bool ispalindrome(int n)
     {
          int n1=n;
    int n2=0;
    while(n1>0){
        int a=n1%10;
        n2=n2*10+a;
        n1/=10;
    }
    if(n2==n)
        return true;
    return false;
     }
    int primePalindrome(int n) {
        if (1e7 <= n && n <= 1e8)
        return 100030001;
        if(n==1)
            return 2;
        
     for(int i=n;i<INT_MAX;i++)
     {
         if(ispalindrome(i))
         {
             if(isprime(i))
             {
                 return i;
             }
         }
           
         
     }
        return 0;
    }
};