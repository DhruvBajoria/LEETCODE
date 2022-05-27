class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int c=0,p=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                c++;
            else{
                p*=nums[i];
            }
        }
        if(c>=2){
            for(int i=0;i<n;i++)
                nums[i]=0;
        }else if(c==1){
            for(int i=0;i<n;i++)
            {
                if(nums[i]==0)
                    nums[i]=p;
                else
                    nums[i]=0;
            }
        }
        else{
            for(int i=0;i<n;i++){
                nums[i]=p/nums[i];
            }
        }
        return nums;
    }
};


  