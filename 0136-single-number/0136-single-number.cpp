class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums) m[i]++;
        
       int ans=0;
        
        for(auto i:m){
            if(i.second!=2) 
             // cout<<i.first<<"\n";
                // return m[i];
                ans=i.first;
        }
        return ans;
    }
};