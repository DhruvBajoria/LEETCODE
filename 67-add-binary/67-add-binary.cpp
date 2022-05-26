class Solution {
public:
    string addBinary(string a, string b) {
   int l1=a.length();
        int l2=b.length();
        int l=abs(l1-l2);
        string temp;
        for(int i=0;i<l;i++)
        {
            temp+='0';
        }
        if(l1>l2)
        {
            b=temp+b;
        }
        else
        {
            a=temp+a;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int carry=0,r=0;
        string ans;
        for(int i=0;i<max(l1,l2);i++)
        {
            int x=a[i]-'0';
            int y=b[i]-'0';
            r=(x^y)^carry;
            if(x+y+carry>1)
                carry=1;
            else
                carry=0;
            ans+=r+'0';
        }
        if(carry)
        {
            ans+=1+'0';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};