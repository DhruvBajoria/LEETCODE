// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector<int>NGL(int a[],int n)
    {
        vector<int>v;
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++)
        {
            if(st.size()==0)
            v.push_back(-1);
            else if(st.size()>0&&st.top().first>a[i])
            {
                v.push_back(st.top().second);
            }
            else if(st.size()>0&&st.top().first<=a[i])
            {
                while(st.size()>0&&st.top().first<=a[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(st.top().second);
                }
            }
            st.push({a[i],i});
        }
        return v;
    }
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int>ngl=NGL(price,n);
       vector<int>width(n);
       for(int i=0;i<n;i++)
       {
           width[i]=i-ngl[i];
       }
       return width;
       // Your code here
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends