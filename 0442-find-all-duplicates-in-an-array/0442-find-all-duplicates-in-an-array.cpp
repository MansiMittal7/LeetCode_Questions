class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int,int>m;
        for(auto i:nums) m[i]++;
        for(auto it:m) {
            if(it.second==2) ans.push_back(it.first);
        }
        
        
        return ans;
    }
};


