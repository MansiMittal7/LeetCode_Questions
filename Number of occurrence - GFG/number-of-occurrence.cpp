//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
		
	int count(int arr[], int n, int x) {
	    // using binary search ie time complexity is O(logn)
	    
	    int ans; int low = 0, high = n-1;
	    int firstocc=-1,lastocc=-1;
	    
	    //first occurence
	    while(low<=high){
	        int mid = (low+high)/2;
	        
	        if(arr[mid]==x){
	            firstocc = mid;
	            high = mid-1;
	        }
	        else if(arr[mid]>x) high = mid-1;
	        
	        else low = mid+1;

	    }
	    if(firstocc==-1) return 0;
	     //last occurence 
	     low = 0, high = n-1;
	    
	    while(low<=high){
	       
	        int mid = (low+high)/2;
	        
	        if(arr[mid]==x){
	            lastocc = mid;
	            low=mid+1;
	        }
	        else if(arr[mid]>x) high = mid-1;
	        
	        else low = mid+1;
	        
	    }

	    ans = (lastocc-firstocc) +1;
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends