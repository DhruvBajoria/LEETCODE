class Solution {
public:
    int maximum69Number (int num) {
        string help=to_string(num);
        bool flag=true;
        for(int i=0;i<help.size();i++)
        {
            if(help[i]=='6'&&flag)
            {
                help[i]='9';
                flag=false;
            }

                
        }
        
        return stoi(help);
        
    }
};