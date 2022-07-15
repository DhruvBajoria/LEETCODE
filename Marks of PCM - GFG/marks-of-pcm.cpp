// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0]&&a[1]==b[1])
        {
            return a[2]<b[2];
        }
        else if(a[0]==b[0])
        {
            return a[1]>b[1];
        }
        return a[0]<b[0];
        
    }
    void customSort (int phy[], int chem[], int math[], int N)
    {
         vector<vector<int>>v;
         for(int i=0;i<N;i++)
         {
             v.push_back({phy[i],chem[i],math[i]});
         }
         
         sort(v.begin(),v.end(),comp);
         for(int i=0;i<N;i++)
         {
              phy[i]=v[i][0];
              chem[i]=v[i][1];
              math[i]=v[i][2];
         }
        // your code here
    } 
};

// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int phy[n];
		int chem[n];
		int math[n];
		for (int i = 0; i < n; ++i)
			cin >> phy[i] >> chem[i] >> math[i];
        Solution ob;
		ob.customSort (phy, chem, math, n);
		for (int i = 0; i < n; ++i)
			cout << phy[i] << " " << chem[i] << " " << math[i] << endl; 
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends