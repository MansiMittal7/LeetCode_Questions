class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        int s=nums.size();
        for(int i=0 ; i<s; i++){
          if(nums[i]<0) n.push_back(nums[i]);
            else p.push_back(nums[i]);
        }
        nums.clear();
        
        for(int i=0 ; i<s; i++){
            if(i%2==0)  nums.push_back(p[i/2]);
            else  nums.push_back(n[(i-1)/2]);
        }
        return nums;
    }
};