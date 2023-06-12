//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends




class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long n)
    {
      long long sum=0;
        for(int i=0;i<n-1;i++) {
            sum=max(sum, arr[i]+arr[i+1]);
        }
        
        return sum;
    }
};
// int ans=INT_MIN; int sum=0;
//         for(int i=0;i<n-1;i++){
//             sum=arr[i]+arr[i+1];
//             ans=max(ans,sum);
//         }
//         return ans;
  // Your code goes here
    //   long long int i=0, j=0,ans=INT_MIN;
    //     vector<int>v;
    //     // v.push_back(arr[0]);
    //     while(j<n){
    //          v.push_back(arr[j]);
    //         sort(v.begin() + i, v.begin() + j + 1);
    //         int d=v[0]+v[1];
    //         ans=max(ans,d);
            
            
    //     }
    //     return ans;
        




//{ Driver Code Starts.
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
	    for(ll i=0;i<n;i++)
		    cin>>a[i];
		Solution ob;
	    cout<<ob.pairWithMaxSum(a,n)<<endl;
	}
	return 0;
}


// } Driver Code Ends