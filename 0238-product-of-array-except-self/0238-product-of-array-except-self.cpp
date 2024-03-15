class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        vector<int>suf(n,1);
        
        for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
        }
        int sufprod=1;
        for(int i=n-2;i>=0;i--){
        sufprod*=nums[i+1];
        ans[i]*=sufprod;
        }
        return ans;
    }
};


//TLE - brute force
// for(int i=0;i<n;i++){
//             int temp=1;
//             for(int j=0;j<n;j++){
//                 if(i==j) temp=temp*1;
//                 else temp=temp* nums[j];
//             }
//             ans.push_back(temp);
//         }
//         return ans;