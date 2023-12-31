//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    

	private:
    
    int f(int ind, int tar, int arr[],vector<vector<int>> & dp){
        int mod = 1e9+7;
        if(ind==0){
            if(tar==0 && arr[0]==0) return 2;
            if(tar==0 || tar==arr[0]) return 1;
            return 0;
        } 
        
        if(dp[ind][tar]!=-1) return dp[ind][tar];
        
        int notTake = f(ind-1, tar,arr,dp);
        int take=0;
        if(arr[ind]<=tar) take = f(ind-1,tar-arr[ind],arr,dp);
        
        return dp[ind][tar]= (take+notTake)%mod;
    }
    
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return f(n-1,sum,arr,dp);
	}
	  
};


 //reccursive solution 
//     private:
    
//     int f(int ind, int tar, int arr[]){
//         if(tar==0) return 1;
//         if(ind==0) return arr[0]==tar;
        
//         int notTake = f(ind-1, tar,arr);
//         int take=0;
//         if(arr[ind]<=tar) take = f(ind-1,tar-arr[ind],arr);
        
//         return take+notTake;
//     }
    
// 	public:
// 	int perfectSum(int arr[], int n, int sum)
// 	{
//         // Your code goes here
//         return f(n-1,sum,arr);
// 	}



//memoization solution 
//     private:
    
//     int f(int ind, int tar, int arr[],vector<vector<int>> & dp){
//         if(tar==0) return 1;
//         if(ind==0) return arr[0]==tar;
//         if(dp[ind][tar]!=-1) return dp[ind][tar];
        
//         int notTake = f(ind-1, tar,arr,dp);
//         int take=0;
//         if(arr[ind]<=tar) take = f(ind-1,tar-arr[ind],arr,dp);
        
//         return dp[ind][tar]= take+notTake;
//     }
    
// 	public:
// 	int perfectSum(int arr[], int n, int sum)
// 	{
//         // Your code goes here
//         vector<vector<int>> dp(n,vector<int>(sum+1,-1));
//         return f(n-1,sum,arr,dp);
// 	}



//tabulation solution 
// 	public:
// 	int perfectSum(int arr[], int n, int sum)
// 	{
//         // Your code goes here
//         int mod = 1e9+7;
//         vector<vector<int>> dp(n,vector<int>(sum+1,0));
//         for(int i=0;i<n;i++) dp[i][0]=1;
//         if(arr[0]<=sum) dp[0][arr[0]]= 1;
//         for(int ind=1;ind<n;ind++){
//             for(int tar=0;tar<=sum;tar++){
                
//                 int notTake = dp[ind-1][tar];
//                 int take=0;
//                 if(arr[ind]<=tar) take = dp[ind-1][tar-arr[ind]];
        
//                 dp[ind][tar]= (take+notTake)%mod;
                
//             }
//         }
//         return dp[n-1][sum];


//space optimization 
// 	public:
// 	int perfectSum(int arr[], int n, int sum)
// 	{
//         // Your code goes here
//         int mod = 1e9+7;
        
        
//         vector<int>prev(sum+1,0), curr(sum+1);
//         prev[0]=curr[0]=1;
//         if(arr[0]<=sum) prev[arr[0]]=1;
        
     
//         for(int ind=1;ind<n;ind++){
//             for(int tar=0;tar<=sum;tar++){
                
//                 int notTake = prev[tar];
//                 int take=0;
//                 if(arr[ind]<=tar) take = prev[tar-arr[ind]];
        
//                 curr[tar]= (take+notTake);
                
//             }
//             prev=curr;
//         }
//         return prev[sum]%mod;
        



//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends