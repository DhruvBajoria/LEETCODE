class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num)
        {
            int a=num%10;
            v.push_back(a);
            num/=10;
        }
        sort(v.begin(),v.end());
        int b=v[0]*10+v[2];
        int c=v[1]*10+v[3];
        return b+c;
    }
};