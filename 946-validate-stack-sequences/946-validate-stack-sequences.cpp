class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int n=pushed.size(),i=0;
        for(auto x:pushed)
        {
            s.push(x);
            while(!s.empty()&&popped[i]==s.top())
            {
                s.pop();
                i++;
            }
            
        }
        return i==n;
    }
};