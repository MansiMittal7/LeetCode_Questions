class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subset_count=(1<<n) ;
            //2 raised to n
        vector<vector<int>>ans;
        for(int mask=0; mask<subset_count;mask++){
            vector<int> subset;
            for(int i=0; i<n; i++){
                 if( (mask&(1<<i))!=0 )
                subset.push_back(nums[i]);
            }
             ans.push_back(subset);
        }
        
        return ans;
    }
};