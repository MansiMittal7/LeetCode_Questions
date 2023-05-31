class Solution {
public:
    void moveZeroes(vector<int>& nums) {
  
        vector<int> v1;
        vector<int> v2;
     for(int i=0; i<nums.size(); i++){
         if(nums[i]!=0) v1.push_back(nums[i]);
         else v2.push_back(nums[i]);
     }
        
        
        for(int i=0; i<v1.size(); i++){
            nums[i]=v1[i];
        }
        for(int i=0; i<v2.size(); i++){
            nums[i+v1.size()]=v2[i];
        }
     // return nums;
    }
};

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