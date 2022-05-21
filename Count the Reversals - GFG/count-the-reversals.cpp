// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    stack<int>st;
    int c=0;
    for(auto x:s)
    {
        if(x=='}'&&st.empty()==true)
        {
            st.push('{');
            c++;
        }
        else if(x=='{')
        {
            st.push('{');
        }
        else if(x=='}'&&st.top()=='{')
        {
            st.pop();
        }
    }
    int t=st.size();
    int ans= c+st.size()/2;
    if(t%2)
    return -1;
    return ans;
    // your code here
}