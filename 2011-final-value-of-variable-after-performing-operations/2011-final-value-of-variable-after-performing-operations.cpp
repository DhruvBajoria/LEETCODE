class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int cnt=0;
        for(auto x:o)
        {
            if(x[1]=='+')
              cnt++;
            else
                cnt--;
            
        }
        return cnt;
    }
};