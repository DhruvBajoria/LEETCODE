// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    void solve(vector<vector<int>>& grid,vector<vector<bool>>&vis,int a,int b)
    {
        int n=grid.size();
        if(a<0||a>=n||b<0||b>=n||vis[a][b]==true||grid[a][b]==0)
        return;
        vis[a][b]=true;
        solve(grid,vis,a+1,b);
        solve(grid,vis,a-1,b);
        solve(grid,vis,a,b+1);
        solve(grid,vis,a,b-1);
        
    }
        bool is_Possible(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        int a,b,c,d;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    a=i;
                    b=j;
                }
                if(grid[i][j]==2)
                {
                    c=i;
                    d=j;
                }
            }
        }
        
        solve(grid,vis,a,b);
        return vis[c][d];
        //code here
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends