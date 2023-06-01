class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,c=0,n=nums.size(); 
       
        for(int i=0; i<n;i++){
            if(nums[i]==1){ c++;
            ans=max(ans,c);
            }
            
            else{
            c=0;
        }
        }
        
        
        return ans;
    }
};