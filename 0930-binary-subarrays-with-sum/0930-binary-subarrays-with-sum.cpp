class Solution {
private:
    int atMost(vector<int>& nums, int g) {
        if (g < 0) return 0;
        
        int res = 0, i = 0,j=0,sum=0,n = nums.size();
        
        // while(j<n){
        //     g-=nums[j];
        //     while(g<0){
        //         g+=nums[i];
        //         i++;
        //     }
        //         res+=j-i+1;
        //     j++;
        // }
        
        while(j<n){
            sum+=nums[j];
            while(sum>g && i<=j){
                sum-=nums[i];
                i++;
            }
            res+=j-i+1;
            j++;
        }
        return res;
    }
    
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
    
      return atMost(nums,goal)-atMost(nums,goal-1);
      // sub with sum=goal = subarray with sum<=goal  -  subarray with sum < goal
     
    }
 
};


//  int ans=0, preSum=0;
//       unordered_map<int,int> freq;
//         freq[0]=1;
        
//         for(auto it:nums ){
//             preSum+=it;
//             if(freq.find(preSum-goal)!=freq.end())
//                 ans+=freq[preSum-goal];
//             freq[preSum]++;
//         }
//         return ans;



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