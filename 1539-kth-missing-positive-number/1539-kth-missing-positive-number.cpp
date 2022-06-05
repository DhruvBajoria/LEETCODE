class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a=*max_element(arr.begin(),arr.end());
        int n=arr.size();
        vector<int>help;
        if(a-n>=k)
        {
            for(int i=1;i<=a;i++)
            {
                if(find(arr.begin(),arr.end(),i)==arr.end())
                {
                    help.push_back(i);
                }
            }
        }
        else{
             for(int i=1;i<=a+k;i++)
            {
                if(find(arr.begin(),arr.end(),i)==arr.end())
                {
                    help.push_back(i);
                }
            }
        }
        return help[k-1];
        
    }
};