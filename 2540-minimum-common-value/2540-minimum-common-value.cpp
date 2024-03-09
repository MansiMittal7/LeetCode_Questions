class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ans=-1, n1=nums1.size(),n2=nums2.size();
        
        // for(int i=0;i<n1;i++){
        //     for(int j=0;j<n2;j++){
        //         if(nums1[i]==nums2[j]){
        //             ans=nums1[i];
        //             break;
        //         }
        //     }
        // }
        // return ans;
        
        
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()) {
            
            if(nums1[i]<nums2[j]) i++;
            else if(nums1[i]>nums2[j]) j++;
            else if(nums1[i] == nums2[j]) return nums1[i];
            
        }
        return -1;
    }
};