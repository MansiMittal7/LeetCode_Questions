class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int n=nums.size();
      for(int j=0;j<n-1;j++){
          if(nums[j]==0){
            for(int i=j+1;i<n;i++){
               if(nums[i]!=0){
                   swap(nums[i],nums[j]);
                   j++;
               } 
            }  
          }  
      }
    
    }
};




//approach with two vectors-
//         vector<int> v1;
//         vector<int> v2;
//      for(int i=0; i<nums.size(); i++){
//          if(nums[i]!=0) v1.push_back(nums[i]);
//          else v2.push_back(nums[i]);
//      }
        
        
//         for(int i=0; i<v1.size(); i++){
//             nums[i]=v1[i];
//         }
//         for(int i=0; i<v2.size(); i++){
//             nums[i+v1.size()]=v2[i];
//         }



// approach with one vectors-
//         int n=nums.size();
//         vector<int> v1;
//         for(int i=0; i<n; i++){
//          if(nums[i]!=0) v1.push_back(nums[i]);
//         }
        
//         int nz=v1.size();
        
//         for (int i = 0; i < nz; i++) nums[i] = v1[i];

//         for (int i = nz; i < n; i++) nums[i] = 0;



 //  int i=nums.size()-1;
//         for(int j=nums.size()-1;j<=0; --j ){
//             if(nums[j]==0){
//                 nums[i]=nums[j];
//                 i--;
//             }
            
        // }
        // reverse(nums,nums+nums.size());
        // return nums;
        // for(int i=0; i<nums.size();i++) cout<<nums[i];

     //    int z=0;
     // for(int i=0; i<nums.size(); i++){
     //     if(nums[i]=='0') z++;
     //     else cout<<nums[i];
     // }
     //    while(z--) cout<<'0';