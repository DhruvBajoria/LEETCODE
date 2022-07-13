// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
	long long minSum(vector<int> a,int N,int K){
	    priority_queue<float>pq;
	    for(int i=0;i<N;i++)
	    {
	        pq.push(a[i]);
	    }
	    
	    while(N--)
	    {
	        float a=pq.top();
	        pq.pop();
	        if(a<K)
	        {
	            a=0;
	        }
	      else{
	          float p=0.1*a;
	          if(p>K)
	          {
	              a-=p;
	          }
	          else
	          {
	              a-=K;
	          }
	      }
	        
        
	        
	        pq.push(a);
	        
	    }
	    float ans=0;
	    while(!pq.empty())
	    {
	        ans+=pq.top();
	        pq.pop();
	        
	    }
	    return (long long)ans;
	    // code here
	}
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N>>K;
        vector<int> a(N);
        for(int i = 0;i<N;i++)
            cin>>a[i];
        Solution ob;
        cout << ob.minSum(a,N,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends