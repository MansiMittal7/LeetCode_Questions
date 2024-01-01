//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    //space optimization 
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int maxweight, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<int>prev(maxweight+1 , 0), curr(maxweight+1 , 0);
       
       for(int w=wt[0]; w<=maxweight; w++) prev[w]=val[0];
       
       for(int ind=1; ind<n;ind++){
           for(int w=0;w<=maxweight; w++){
               int notTake=0+prev[w];
               int take=INT_MIN;
               if(wt[ind]<=w) take=val[ind]+prev[w-wt[ind]];
               curr[w]= max(take,notTake);
           }
           prev=curr;
       }
       
       return prev[maxweight];
    }
};



//memoisation approach  
    // private:
    // int f(int ind, int w, int wt[], int val[], vector<vector<int>> & dp){
    
    // if(ind==0){
    // if(wt[0]<=w) return val[0];
    // return 0; 
    // }   
    
    // if(dp[ind][w]!=-1) return dp[ind][w];
    
    // int notTake= 0+f(ind-1, w,wt,val,dp);
    // int take=INT_MIN;
    // if(wt[ind]<=w)
    // take= val[ind]+f(ind-1, w-wt[ind], wt,val,dp);
    
    // return dp[ind][w]=max(notTake, take);
    
    // }
    
    // public:
    // //Function to return max value that can be put in knapsack of capacity W.
    // int knapSack(int maxweight, int wt[], int val[], int n) 
    // { 
    //   // Your code here
    //   vector<vector<int>> dp(n,vector<int>(maxweight+1 , -1));
    //   return f(n-1, maxweight, wt, val,dp);
    
    
 //tabulation approach  
//  public:
//     //Function to return max value that can be put in knapsack of capacity W.
//     int knapSack(int maxweight, int wt[], int val[], int n) 
//     { 
//       // Your code here
//       vector<vector<int>> dp(n,vector<int>(maxweight+1 , 0));
//       for(int w=wt[0]; w<=maxweight; w++) dp[0][w]=val[0];
       
//       for(int ind=1; ind<n;ind++){
//           for(int w=0;w<=maxweight; w++){
//               int notTake=0+dp[ind-1][w];
//               int take=INT_MIN;
//               if(wt[ind]<=w) take=val[ind]+dp[ind-1][w-wt[ind]];
//               dp[ind][w]= max(take,notTake);
//           }
           
//       }
       
//       return dp[n-1][maxweight];
    


//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends