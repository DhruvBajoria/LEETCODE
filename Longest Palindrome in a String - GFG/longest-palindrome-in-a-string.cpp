// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
   
    string longestPalin(string s) {
        int n=s.length();
        string ans;
        for(int i=0;i<n;i++)
        {
            int l=i,r=i;
            while(l>=0&&r<n&&s[l]==s[r])
            {
                if(ans.length()<r-l+1)
                ans=s.substr(l,r-l+1);
                l--;
                r++;
            }
             l=i;
             r=i+1;
            while(l>=0&&r<n&&s[l]==s[r])
            {
                if(ans.length()<r-l+1)
                ans=s.substr(l,r-l+1);
                l--;
                r++;
            }
        }
  
    return ans;
        // code here
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends