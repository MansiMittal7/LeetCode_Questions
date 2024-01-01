class Solution {
//recursive approach
private:
   int f(int ind, int t, vector<int>& coins, vector<vector<int>> &dp ){
        
        if(ind==0){
            if(t%coins[0]==0) return t/coins[0];
            return 1e9;
        }
        if(dp[ind][t]!=-1) return dp[ind][t];
        int notTake=  0+f(ind-1, t,coins,dp);
        int take=INT_MAX;
        if(coins[ind]<=t) take=1+f(ind,t-coins[ind], coins,dp);
        
        return dp[ind][t]=min(take,notTake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1,-1));
        int ans = f(n-1,amount,coins,dp);
        if(ans>=1e9) return -1;
        return ans;
    }
};