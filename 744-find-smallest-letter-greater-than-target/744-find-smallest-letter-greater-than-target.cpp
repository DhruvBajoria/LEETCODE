class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
       int n=arr.size();
        int l=0,h=n-1;
        char res='#';
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(arr[mid]==target)
            {
                l=mid+1;
            }
            else if(arr[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                res=arr[mid];
                h=mid-1;
            }
        }
        return res=='#'?arr[0]:res;
    }
};