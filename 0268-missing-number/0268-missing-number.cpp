class Solution {
public:
    int missingNumber(vector<int>& nums) {
     //    sort(nums.begin(),nums.end());
     //    if(nums[0]==0){
     //    int ans=nums.size(); 
     //    for(int i=0; i<nums.size();i++){
     //        if(nums[i]!=i) ans= i;    
     //    }
     // //   return ans;
     //    }
     //   else if(nums[0]!=0)
     //    {
     //    int ans=0;
     //    for(int i=0; i<nums.size();i++){
     //        if(nums[i]!=i) ans= i;    
     //    }
     //    }
               // return ans;
        int n = nums.size();
        int sum =( n*(n+1) )/2;
        
        for(int i=0;i<n;i++){
            sum=sum-nums[i];
        }
        return sum;

    }
};