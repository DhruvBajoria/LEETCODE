// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        string u,l;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            l+=s[i];
            else
            u+=s[i];
            
        }
        
        sort(l.begin(),l.end());
        sort(u.begin(),u.end());
        int j=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]=l[j++];
            }
            else
            {
                s[i]=u[k++];
            }
        }
       return s; 
        // your code here
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends