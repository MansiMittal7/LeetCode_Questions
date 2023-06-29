class Solution {
    
    void func(int index,vector<int>& nums, vector<int> & current, vector<vector<int>> &ans  ){
      ans.push_back(current);
        for(int i=index;i<nums.size(); i++){
             if(i!=index && nums[i]==nums[i-1]) continue;
            current.push_back(nums[i]);
            func(i+1, nums, current, ans);
             current.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current; 
        sort(nums.begin(), nums.end());
        
        func(0,nums, current,ans);
        return ans;
    }
};