class Solution {
public:
    int convertTime(string cu, string co) {
        int a=(((cu[0]-'0')*10+cu[1]-'0')*60)+(((cu[3]-'0')*10+cu[4]-'0'));
        int b=(((co[0]-'0')*10+co[1]-'0')*60)+(((co[3]-'0')*10+co[4]-'0'));
        
        int c=abs(b-a);
        cout<<a<<b<<c<<endl;
       int count=0;
        while(c>=60)
        {
            count++;
            c-=60;
        }
           while(c>=15)
        {
            count++;
            c-=15;
        }
           while(c>=5)
        {
            count++;
            c-=5;
        }
           while(c>=1)
        {
            count++;
            c-=1;
        }
        return count;
    }
};