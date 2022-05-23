// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string S)
{
    int cnt1=0,cnt2=0;
    int i=0;
    while(i<S.length())
    {
        if(i%2==0)
        {
            if(S[i++]=='0')
            continue;
            else
            cnt1++;
        }
        else
        {
            if(S[i++]=='1')
            continue;
            else
            cnt1++;
        }
        
    }
    int j=0;
    while(j<S.length())
    {
        if(j%2==0)
        {
            if(S[j++]=='1')
            continue;
            else
            cnt2++;
        }
        else
        {
            if(S[j++]=='0')
            continue;
            else
            cnt2++;
        }
        
    }
    return min(cnt1,cnt2);
    // your code here
}