class Solution {
public:
    vector<int> NGR(vector<int>&t)
    {
        vector<int>v;
        stack<pair<int,int>>st;
        int m=t.size();
        for(int i=m-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                v.push_back(-1);
            }
            else if(st.size()>0&&st.top().first>t[i])
            {
                v.push_back(st.top().second);
            }
            else if(st.size()>0&&st.top().first<=t[i])
            {
                while(st.size()>0&&st.top().first<=t[i])
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
            st.push({t[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
    }
    vector<int> dailyTemperatures(vector<int>& t) {
   int n=t.size();
        vector<int>a=NGR(t);
        vector<int>v(n);
       
        for(int i=0;i<n;i++)
        {
            if(a[i]==-1)
            {
                v[i]=0;
            }
            else
                v[i]=a[i]-i;
        }
        return v;
    }
};