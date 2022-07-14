void solve(vector<int>&c,int t,int i,int n,vector<vector<int>>&ans,vector<int>&v)
{
if(t==0)
{
ans.push_back(v);
return;
}
for(int j=i;j<n;j++)
{
if(j>i&&c[j]==c[j-1])
continue;
v.push_back(c[j]);
solve(c,t-c[j],j+1,n,ans,v);
v.pop_back();
}
}
vector<vector<int>> combinationSum2(vector<int>& c, int t) {
vector<vector<int>>ans;
int n=c.size();
vector<int>v;
sort(c.begin(),c.end());
solve(c,t,0,n,ans,v);
vector<vector<int>>a;
// for(auto x:ans)
// {
//     a.push_back(x);
// }
return ans;
}