class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n=nums.size();
      vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0) j++;
                else if(sum>0) k--;
                else{
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
        }
};




//brute force O(N*N*N) + log(number of unique triplets)
  // vector < int > temp;
  //       vector < vector < int >> ans;
  //       for(int i=0; i<nums.size()-2;i++){
  //           for(int j=i+1; j<nums.size()-1;j++){
  //               for(int k=j+1; j<nums.size();k++){
  //                   temp.clear();
  //                   if((nums[i]+nums[j]+nums[k])==0){
  //                         temp.push_back(nums[i]);
  //                         temp.push_back(nums[j]);
  //                         temp.push_back(nums[k]);
  //                   }
  //                   if (temp.size() != 0)
  //                   ans.push_back(temp);
  //               }
  //           }
  //       }
  //       return ans;