class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //linked list cycle approach
        int n=nums.size(),ans=0,slow=nums[0],fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        } while(slow!=fast);
        
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
            
        }
        return slow;
    }
};


// map<int,int> mp;
//         int n=nums.size(),ans=0;
//         for(int i=0;i<n;i++) mp[nums[i]]++;
        
//         for(auto it: mp){
//             if(it.second != 1){
//                 ans=it.first;
//                 break;
//             }
//         }
//         return ans;