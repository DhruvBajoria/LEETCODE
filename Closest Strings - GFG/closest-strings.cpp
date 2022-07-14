// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
	    int a=-1,b=-1,cnt=INT_MAX;
	    if(word1==word2&&find(s.begin(),s.end(),word1)!=s.end())
	    return 0;
	    for(int i=0;i<s.size();i++)
	    {
	        //cout<<(s[i]==word1)<<endl;
	        if(s[i]==word1)
	        a=i;
	        else if(s[i]==word2)
	        b=i;
	        //cout<<"a="<<" "<<a<<"b="<<" "<<b<<endl;
	        if(a!=-1&&b!=-1)
	        {
	            cnt=min(cnt,abs(b-a));
	        }
	    }
		return cnt;// Your code goes here
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}  // } Driver Code Ends