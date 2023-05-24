class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // vector<int> v;
        int ans=-1;
        for(int i=0; i<nums.size(); i++){
           if(nums[i]==target) ans=i;
               // return {i};
            // else return {-1};
        }
        return ans;
       
    }
};