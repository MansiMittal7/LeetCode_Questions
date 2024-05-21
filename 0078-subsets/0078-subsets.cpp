class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index,vector<vector<int>> & ans ){
        
          if(index>=nums.size()){ //base case
              ans.push_back(output);
              return;
          }
          solve(nums,output,index+1,ans);//exclude
        
          int element= nums[index];
          output.push_back(element);
          solve(nums,output,index+1,ans);
    }
   
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    //reccursive solution 
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
};
 



//striver 
// vector<vector<int>> ans;
//      int n=nums.size();
//         for(int i=0 ; i<((1<<n)-1);i++){
//             // string ans="";
//             vector<int>v;
//             for(int j=0;i<(n-1); j++){
//                 if(nums[j]&(1<<j)) v.push_back(nums[j]);
//             }
//             ans.push_back(v);
//         }
//         return ans;
    