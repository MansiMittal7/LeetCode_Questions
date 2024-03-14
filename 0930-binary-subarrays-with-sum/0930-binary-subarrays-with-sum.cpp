class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
    
      // return atMost(nums,goal)-atMost(nums,goal-1);
      int ans=0, preSum=0;
      unordered_map<int,int> freq;
        freq[0]=1;
        
        for(auto it:nums ){
            preSum+=it;
            if(freq.find(preSum-goal)!=freq.end())
                ans+=freq[preSum-goal];
            freq[preSum]++;
        }
        return ans;
    }
 
};

//map<int,int> mp;
//         mp[0] = 1;
//         int preSum=0, cnt=0;
//         for(int i=0; i<nums.size(); i++){
//             preSum+=nums[i];
//             int remove= preSum-goal;
//             cnt+=mp[remove];
//             mp[remove]+=1;          
//         }      
//         return cnt;