class Solution {
public:
    string addBinary(string a, string b) {
            int la = a.size();
        int lb = b.size();
        
        int l = abs(la-lb);
        string temp = "";
        for(int i =0; i < l; i++)
            temp +='0';
        
        string ans = "";
        if(la<lb)
            a = temp + a;
        else b = temp +b;
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        int carry =0;
        for(int i = 0; i <max(la, lb); i++)
        {
            int x = a[i] -'0', y = b[i] -'0';
            int r = (x^y)^carry;
            
            if(x+y+carry > 1)
                carry = 1;
            else carry = 0;
            
            ans += r+'0';
        }
        
        if(carry)
            ans += 1+'0';
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};