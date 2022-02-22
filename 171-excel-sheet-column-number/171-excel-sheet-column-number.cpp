class Solution {
public:
    int titleToNumber(string columnTitle) {
     int i,count=0,sum=0;
        for(i=columnTitle.length()-1;i>=0;i--){
            sum+=(columnTitle[i]-64)*(int)pow(26,count);
            count++;
        }
        return sum;
    }
};