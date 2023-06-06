class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
         // sort(nums.begin(),nums.end()); 
        int n =nums.size();
         map<int, int> mp; 
        for(int i=0 ; i<n ;i++) mp[nums[i]]++;

        for(auto it : mp){
            if(it.second>n/2) 
                return it.first;
        }
       
         return -1;
    }
};

//         if(count>ans){ 
//              ans=count;
           
//             }
// ans=0;
        // for(int i=0 ; i<nums.size();i++){
        //     if(nums[i]==nums[i+1]) {
        //         count++;
        //     }
        // }