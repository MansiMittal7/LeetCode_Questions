class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, n=nums.size(),ans=INT_MIN;
        if(n==1) ans=nums[0];
        else
    {
            
        
       for(int i=0; i<n;i++){
           sum=sum+nums[i];
           if(sum>ans) ans=sum;
            if( sum<0)  sum=0;
       } 
    }
        return ans;
    }
};
//sum<nums[i+1] &&