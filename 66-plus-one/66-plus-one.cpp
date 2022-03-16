class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int>v;
        int n=d.size();
        int a=d[n-1]+1;
        int carry=a>9?1:0;
        v.push_back(a%10);
        for(int i=n-2;i>=0;i--)
        {
            int h=d[i]+carry;
            v.push_back(h%10);
            carry=h/10;
        }
        if(carry)
            v.push_back(carry);
        reverse(v.begin(),v.end());
        return v;
    }
};