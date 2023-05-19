class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       // int c=0;
        
        map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        bool flag=false;
        for(auto i:mp){
              if(i.second >= 2) return true;
          }

       return flag;
    }
};