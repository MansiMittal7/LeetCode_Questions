class Solution {
//memoization
private:
    int f(int ind, int buy,vector<int>& prices, int n,vector<vector<int>> &dp){
        if(ind ==n) return 0; //array got exhausted
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        
        int profit = 0;
        
        if(buy){
            profit= max(-prices[ind] + f(ind+1,0,prices,n,dp)  ,   0+ f(ind+1, 1,prices,n,dp)) ; 
        }
        else{
            profit= max(prices[ind] + f(ind+1,1,prices,n,dp)  ,   0+ f(ind+1, 0,prices,n,dp));
        }
        return dp[ind][buy]= profit;
    }
    
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n, vector<int>(2,-1));
        return f(0,1,prices,n,dp);
    }
};


//reccurssion
// private:
//     int f(int ind, int buy,vector<int>& prices, int n){
//         if(ind ==n) return 0; //array got exhausted
        
//         int profit = 0;
        
//         if(buy){
//             profit= max(-prices[ind] + f(ind+1,0,prices,n)  ,   0+ f(ind+1, 1,prices,n)) ; 
//         }
//         else{
//             profit= max(prices[ind] + f(ind+1,1,prices,n)  ,   0+ f(ind+1, 0,prices,n));
//         }
//         return profit;
//     }
    
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         return f(0,1,prices,n);