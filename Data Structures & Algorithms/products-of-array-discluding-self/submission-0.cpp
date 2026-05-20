class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numZ=0;
        int prod=1;
        for(int &x:nums){
            if(x==0)numZ++;            
        }
        if(numZ==0){
            for(int &x:nums){
                prod*=x;
            }
            for(int&x:nums){
                x=(prod/x);
            }
        }
        else if(numZ>1){
            for(int&x:nums){
                x=0;
            }
        }
        else{
            for(int &x:nums){
                if(x!=0){
                    prod*=x;
                }
            }
            for(int&x:nums){
                if(x!=0){
                    x=0;
                }
                else{
                    x=prod;
                }
            }
        }
        return nums;
    }
};
