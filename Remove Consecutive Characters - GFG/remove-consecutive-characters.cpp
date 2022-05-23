// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string ans;
        int j=0;
        ans+=S[0];
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!=S[j])
            {
                j=i;
                ans+=S[i];
                
            }
        }
       return ans; // code here.
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends