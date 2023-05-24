class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>sumFreq{{0,1}};
        int n=nums.size();
        int i=0,count=0,sum=0;
        for(int i=0; i<n;i++){
            sum=sum+nums[i];
            if(sumFreq.count(sum-k))count+=sumFreq[sum-k];
            sumFreq[sum]++;
        }
            return count;
    }
};
