class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		//two pointer
        int n=nums.size();
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
    };

        
//brute force-
// if (nums.size() == 0 || nums.size() == 1)
// 		return nums.size();
        
//         vector<int> v;
//         for(int i=1; i<nums.size(); i++){
//             if(nums[i]!=nums[i-1])
//             v.push_back(nums[i]);
        
//           }
//         int s=v.size();
//         int a=s+1;
//          return a;
        
	
   

