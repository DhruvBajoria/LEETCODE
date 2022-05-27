class Solution {
public:

    string getPermutation(int n, int k) {
        vector<int>arr;
        vector<vector<int>>v;
        for(int i=1;i<=n;i++)
        {
            arr.push_back(i);
        }
        k--;
     
 
    do {
        v.push_back(arr);
    } while (next_permutation(arr.begin(),arr.end())&&k--);
        vector<int>a=v[v.size()-1];
        string st;
        for(auto x:a)
          st+=x+'0';
return st;
    }
};