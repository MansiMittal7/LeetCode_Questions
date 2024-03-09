class Solution {
    
 public:
    int getCommon(vector<int>& nums1, vector<int>& nums2){
      // using pre computation technique 
     unordered_set<int> set1(nums1.begin(),nums1.end());
     for(auto it:nums2){
         if(set1.contains(it)) return it;
     }
     return -1;
    }
};



// int ans=-1, n1=nums1.size(),n2=nums2.size();
        //brute force
        // for(int i=0;i<n1;i++){
        //     for(int j=0;j<n2;j++){
        //         if(nums1[i]==nums2[j]){
        //             ans=nums1[i];
        //             break;
        //         }
        //     }
        // }
        // return ans;
        



        //two pointer
//         int i=0, j=0;
//         while(i<nums1.size() && j<nums2.size()) {
            
//             if(nums1[i]<nums2[j]) i++;
//             else if(nums1[i]>nums2[j]) j++;
//             else if(nums1[i] == nums2[j]) return nums1[i];
            
//         }
//         return -1;