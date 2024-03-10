class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //sort both and apply two pointer 
        
        unordered_set<int> s(nums1.begin(),nums1.end());
        unordered_set<int> common;
        
   
        for(auto it:nums2){
            if(s.contains(it)) common.insert(it);
        }
        
        vector<int> ans(common.begin(),common.end());
        return ans;
        
        
    }
};