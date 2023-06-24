//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int sumExists(int arr[], int n, int sum) {
        // code here
        int booln=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if( (arr[i]+arr[j]==sum)&& i!=j ) booln=1;
            }
        }
        return booln;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum;
        cin >> n ;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin>>sum;
        Solution ob;
        auto ans = ob.sumExists(arr, n, sum);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends