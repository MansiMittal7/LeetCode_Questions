class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
       
    multiset<int> s; 
	for(int i = 0; i < nums.size(); i++){
        s.insert(nums[i]);
    }
    for(int i = 0; i < nums.size(); i++){
        if(s.count(nums[i]) == 1) sum += nums[i];
    }
        return sum;
            
    }
};

//by map

//map<int,int> mp;
        // for(int i=0; i<nums.size();i++) mp[nums[i]]++; 
        // for(auto it:mp){
        //     if(it.second==1) sum+=it.first;
        // }