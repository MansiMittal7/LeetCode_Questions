class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if(nums.size()==0) return 0;
         
        sort(nums.begin(),nums.end());
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1 ; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]) v.push_back(nums[i]);
        }
        int c=1,ans=1;
        
        for(int i=1 ; i<v.size(); i++){
           
            if(v[i]==v[i-1]+1) c++;
            else c=1;
            ans=max(ans,c);
            
        }
        
        
       
         return ans;
        
    }
};
// ||(nums[i]==nums[i-1])