class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
       vector<int>res(3);
        for(auto &x:triplets)
        {
            if(x[0]<=target[0]&&x[1]<=target[1]&&x[2]<=target[2])
            {
                res={max(res[0],x[0]),max(res[1],x[1]),max(res[2],x[2])};
          
            }
            
        }
        
        
       return res==target; 
     
        
    }
};

