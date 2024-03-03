class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
    
     return atMost(nums,goal)-atMost(nums,goal-1);
    }
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

};


//     int atMost(vector<int>& A, int S) {
//         if (S < 0) return 0;
//         int res = 0, i = 0, n = A.size();
//         for (int j = 0; j < n; j++) {
//             S -= A[j];
//             while (S < 0)
//                 S += A[i++];
//             res += j - i + 1;
//         }
//         return res;


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