// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	bool isSquare(long long n)
	{
	    long long sq=sqrt(n);
	    if(sq*sq==n)
	    return true;
	    return false;
	}
	
	long double maximumProfit(int N, long long c, vector<long long> w, vector<long long> p){
	    // Code here.
	    vector<pair<long double,long long>>v;
	    for(int i=0;i<N;i++)
	    {
	        v.push_back({(double)p[i]/w[i],w[i]});
	    }
	    sort(v.begin(),v.end());
	    int i=N-1;
	    long double ans=0;
	    while(i>=0&&c>0)
	    {
	        if(!isSquare(v[i].second))
	        {
	            int mi=min(c,v[i].second);
	            ans+=v[i].first*mi;
	            c-=mi;
	        }
	        i--;
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends