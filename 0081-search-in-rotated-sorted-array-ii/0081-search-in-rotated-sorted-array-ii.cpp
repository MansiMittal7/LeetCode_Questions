class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int high=nums.size()-1;
        int low=0;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
                return true;
            
            if(nums[low]==nums[mid] && nums[high]==nums[mid])
            {
                low++;
                high--;
                continue;
            }
            
            if(nums[low]<=nums[mid])
            {
             if(nums[mid]<=target)
                 low=mid+1;
                 else
                  high=mid-1;
             
            }
            else
            {
                if(nums[mid]<target)
                 low=mid+1;
                 else
                  high=mid-1;

            }
        }
        
        
        return false;
        
        
        
    }
};