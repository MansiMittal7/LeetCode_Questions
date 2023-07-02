class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        set<int>s;
        map<int,int> mp;
        for(int i=0; i<nums.size();i++) mp[nums[i]]++; 
            // s.insert(nums[i]);
        
        // for(auto it=s.begin(); it!=s.end;++it) sum+=(*it);
        // for(int i=0; i<s.size();i++) sum+=s[i];
        
        // for(auto it:s) mp[it]++ ;
        
        for(auto it:mp){
            if(it.second==1) sum+=it.first;
        }
        
        return sum;
            
    }
};