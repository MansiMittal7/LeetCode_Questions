class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //longest subarray with atmost k zeros 
        
        int zcnt=0,i=0,j=0,n=nums.size(),ans=0;
        while(j<n){
            if(nums[j]==0)zcnt++;
            
            if(zcnt<=k){
                ans=max(ans, j-i+1);
                j++;
            } 
            else{
               while(zcnt>k){
               if(nums[i]==0) zcnt--;
                i++; 
               }
                j++;
            }  
       
        }
           
            return ans;
        }
};