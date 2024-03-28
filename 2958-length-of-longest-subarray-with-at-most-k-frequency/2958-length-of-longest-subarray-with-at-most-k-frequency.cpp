class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0,i=0,j=0;
        while(j<nums.size()){
            mp[nums[j]]++;
            while(i<=j && mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
            }
            ans=max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};