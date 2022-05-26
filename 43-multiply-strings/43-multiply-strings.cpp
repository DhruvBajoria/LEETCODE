class Solution {
public:
    string multiply(string num1, string num2) {
        int n=num1.length(),m=num2.length();
        vector<int>ans(n+m,0);
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                int num=(num1[i]-'0')*(num2[j]-'0');
                int sum=num+ans[i+j+1];
                ans[i+j]+=sum/10;
                ans[i+j+1]=sum%10;
                
            }
        }
   string res;
        for(int i=0;i<ans.size();i++)
        {
            if(res.length()!=0||ans[i]!=0)
            res+=ans[i]+'0';
        }
        if(res.size()==0)
            return "0";
        return res;
    }
};





//          int m = num1.size();
//         int n = num2.size();
        
//         vector<int> ans((m+n),0);
        
//         for(int i = m-1; i>=0; i--){
//             for(int j = n-1; j>=0; j--){
//                 int num = (num1[i] - '0') * (num2[j] - '0');
//                 int sum = ans[i + j + 1] + num;
//                 ans[i + j] += sum/10;
//                 ans[i + j + 1] = sum%10;
//             }
//         }
        
//         string s = "";
//         for(int i=0; i<(m+n); i++){
//             if(s.length() != 0 || ans[i] != 0){
//                 s += (ans[i] + '0');
//             }
//         }
        
//         if(s.length() == 0){
//             return "0";
//         }
//         return s;