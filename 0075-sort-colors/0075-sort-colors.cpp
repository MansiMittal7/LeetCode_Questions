class Solution {
public:
    void sortColors(vector<int>& nums) {
        int o=0, z=0 , t=0 ; 
     for(int i=0; i<nums.size(); i++){
         if(nums[i]==0) z++;
         else if(nums[i]==1) o++;
         else if(nums[i]==2) t++;
     } 
        for(int i=0; i<z;i++){
            nums[i]=0;
        }
        for(int i=z; i<o+z;i++){
            nums[i]=1;
        }
        for(int i=z+o; i<t+o+z;i++){
            nums[i]=2;
        }
        // return nums;
    }
};