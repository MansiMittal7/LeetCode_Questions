class Solution {
    class Compare {
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        
        if (a.first == b.first)
            return a.second
                   > b.second; 
        return a.first
               < b.first; 
    }
};
public:
  
    vector<int> frequencySort(vector<int>& nums) {
        
        int n= nums.size();
        vector<int> ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>,Compare> maxh;
        
        map<int,int> mp;
        
        for(int i=0;i<n; i++) mp[nums[i]]++;
        
        for(auto it: mp)  maxh.push({it.second, it.first});
        
        while(maxh.size()>0){
            int freq= maxh.top().first;
            int ele= maxh.top().second;
            
            for(int i=0;i<freq;i++) ans.push_back(ele);
            maxh.pop();
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};