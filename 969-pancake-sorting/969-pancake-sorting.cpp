class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            auto maxpo=max_element(arr.begin(),arr.end()-i);
            ans.push_back(maxpo-arr.begin()+1);
            ans.push_back(arr.size()-i);
            reverse(arr.begin(),maxpo+1);
            reverse(arr.begin(),arr.end()-i);
        }
        return ans;
        
    }
};