class Solution {
    
private:
    int atMost(vector<int>& nums, int goal){
        int n=nums.size(), i=0,j=0,ans=0,sum=0;
        if(goal<0) return 0;
         while(j<n){
            sum+=nums[j];
            
//             if(sum<=goal){
//                 ans+=(j-i+1);
//                 j++;
//             }
//             else{
//                 while(sum>goal){
//                     sum-=nums[i];
//                     i++;
//                 }
//                 j++;
//             }
             
            while(sum>goal)
            {
                sum-=nums[i];
                i++;
            }

            ans+=(j-i+1); 
            j++;
        }
        return ans;
    }

public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0,j=0,ans=0,n=nums.size(),cnt=0,sum=0;
        for(int i=0;i<n;i++) nums[i]=nums[i]%2;
        
        return atMost(nums,k)-atMost(nums,k-1);
        
    }
};


