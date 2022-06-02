class Solution {
public:
     vector<int>NSL(vector<int>a,int n)
    {
        vector<int>v;
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++)
        {
            if(st.size()==0)
            v.push_back(-1);
            else if(st.size()>0&&st.top().first<a[i])
            {
                v.push_back(st.top().second);
            }
            else if(st.size()>0&&st.top().first>=a[i])
            {
                while(st.size()>0&&st.top().first>=a[i])
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
            st.push({a[i],i});
        }
        return v;
    }
      vector<int>NSR(vector<int> a,int n)
    {
        vector<int>v;
        
        stack<pair<int,int>>st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
            v.push_back(n);
            else if(st.size()>0&&st.top().first<a[i])
            {
                v.push_back(st.top().second);
            }
            else if(st.size()>0&&st.top().first>=a[i])
            {
                while(st.size()>0&&st.top().first>=a[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    v.push_back(n);
                }
                else
                {
                    v.push_back(st.top().second);
                }
            }
            st.push({a[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
    }
    int MAH(vector<int>& arr) {
        int n=arr.size();
        vector<int>a=NSL(arr,n);
        vector<int>b=NSR(arr,n);
        vector<int>width(n);
        for(int i=0;i<n;i++)
        {
            width[i]=b[i]-a[i]-1;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,width[i]*arr[i]);
        }
        return ans;
    }
    
    int maximalRectangle(vector<vector<char>>& v) {
        
        vector<int> l(v[0].size(), 0);
        int mx = 0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(v[i][j]=='0')
                   l[j]=0;
                else
                {
                    l[j]=l[j]+1;
                }
            }
            mx=max(mx,MAH(l));
        }
         return mx;  
    }
};