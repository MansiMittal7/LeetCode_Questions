class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min=INT_MAX, profit=0,ans=0,n=prices.size();
       for(int i=0; i<n; i++){
             if(prices[i]<min) min=prices[i];
             profit = prices[i]-min;
           if(profit>ans) ans=profit;
         }
        return ans;
     
    }
};
// int ans=0,n=prices.size();
       //  for(int i=0; i<n-1; i++){
       //      for(int j=i+1; j<n; j++){
       //          if((prices[j]-prices[i])>ans){
       //               ans=prices[j]-prices[i];
       //              // return prices[j];
       //          }
       //      }
       //  }
       //  return ans;