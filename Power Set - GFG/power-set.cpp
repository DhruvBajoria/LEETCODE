// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    int n=s.length();
		    vector<string>v;
		    for(int i=1;i<(1<<n);i++)
		    {
		        string temp="";
		        for(int bit=0;bit<n;bit++)
		        {
		            if(i&(1<<bit))
		            {
		                temp+=s[bit];
		            }
		        }
		        v.push_back(temp);
		       
		  }
		  sort(v.begin(),v.end());
		  return v;  // Code here
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends