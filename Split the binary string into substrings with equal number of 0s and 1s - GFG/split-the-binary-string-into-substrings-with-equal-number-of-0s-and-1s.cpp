// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int cnt=0,ans=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            cnt--;
            else
            cnt++;
            if(cnt==0)
            ans++;
        }
        if(cnt!=0)
        return -1;
        return ans;
        //Write your code here
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends