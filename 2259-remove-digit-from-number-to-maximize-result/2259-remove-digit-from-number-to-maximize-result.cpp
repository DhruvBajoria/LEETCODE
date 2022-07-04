class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans;
       
        for(int i=number.size()-1;i>=0;i--)
        {
             string temp;
            if(number[i]==digit)
            {
                temp=number.substr(0,i)+number.substr(i+1);
                cout<<number.substr(0,i)<<" "<<number.substr(i+1)<<endl;
            }
            ans=max(ans,temp);
        }
        return ans;
    }
};