class Solution {
private:
    bool subsetSumToK(int n, int k, vector<int>& nums){
       
        vector<bool> prev(k+1,0), curr(k+1,0);
        prev[0]=curr[0]=true;
        if(nums[0]<=k) prev[nums[0]]=true;
        
        for(int ind=1;ind<n;ind++){
            for(int target=1;target<=k;target++){
                 bool notTake=prev[target];
                 bool take=false;
                 if(nums[ind]<=target) take=prev[target-nums[ind]];
                  curr[target]= take|notTake;
            }
            prev=curr;
        }
        
        return prev[k];
    };
    
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        
        int totsum=0;
        for(int i=0;i<n;i++) totsum+=nums[i];
        if(totsum%2) return false; //total sum is odd so cant be divided into two equal halves
        int target=totsum/2;
        
        return subsetSumToK(n,target,nums);
    }
};