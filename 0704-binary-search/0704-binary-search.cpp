class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int high = n-1;
        int low = 0;
        
        
        while (low<=high ){
            int mid = (high + low)/2;
            
            if(nums[mid] > target) high = mid-1;
            else if( nums[mid]<target) low = mid+1;
            
            else return mid;
            
        }
        
      return -1;  
        
    }
};