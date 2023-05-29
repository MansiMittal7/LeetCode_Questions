//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int maxe=arr[0];
	    int ans=-1;
	   //  vector<int> v;
	    for(int i=0; i<n; i++){
	        if(arr[i]>maxe){
	          ans=maxe;
	          maxe=arr[i];
	        }
	        else if(arr[i]>ans && arr[i]<maxe) ans=arr[i];
            //   maxe=max(maxe,arr[i]);
            //   maxindex=i;
           }
           
        // for(int i=0; i<n; i++){
        //     if(arr[i]>ans && arr[i]!=maxe) ans=arr[i];
        // }
        
        return ans;
	    }
       
	  
	    
	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends