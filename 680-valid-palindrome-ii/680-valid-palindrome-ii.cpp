class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.length();
     int start=0,end=n-1;
        int cnt1=0;
        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            {
                cnt1++;
                start++;
            }
            if(cnt1>1)
                break;
        }
        start=0;end=n-1;
        int cnt2=0;
        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            {
                cnt2++;
                end--;
            }
            if(cnt2>1)
                break;
        }
        if(cnt1==1||cnt2==1)
            return true;
        if(cnt1==0||cnt2==0)
            return true;
        return false;
       
    }
    
//     bool validPalindrome(string &s, int lo, int hi, int count) {
//         if (count > 1) return false;
//         while (lo < hi) {
//             if (s[lo] == s[hi]) {
//                 lo++; hi--;
//             }
//             else {
//                 return validPalindrome(s, lo + 1, hi, count + 1) || 
//                         validPalindrome(s, lo, hi - 1, count + 1);
//             }
//         }
//         return true;
        
//     }
};