class Solution {

    
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        
        int maxfreq=INT_MIN, ele=0;
        for(auto it: mp){
            maxfreq=max(maxfreq, it.second);
        }
        
        for(auto it: mp){
            if(it.second==maxfreq) ele+=it.second;
        }
        // cout<<maxfreq<<ele;
        return ele;
    }
};

