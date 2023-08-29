//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    
	    //binary search O(logn)
	    //index of smallest number = ans 
	    //smallest number lies in unsorted part 
	    
	    int s = 0;
	    int e = n-1;
	     
	    while(s<e)
	    {
	        int mid = s+(e-s)/2;
	        if(arr[mid]<arr[e]) //second part sorted
	        {
	            e = mid;
	        } else //first part sorted
	        {
	            s = mid+1;
	        }
	        
	    }
	    return e;
	    
	   
	}

};

//linear search O(n)
//int i=0,j=n-1;
	   // int cnt=0;
	   // while(arr[i]>arr[j]){
	   //     i++;
	   //     cnt++;
	   // }
	   // return cnt;

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends