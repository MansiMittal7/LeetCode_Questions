//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    vector<int> v1;
        vector<int> v2;
     for(int i=0; i<n; i++){
         if(arr[i]!=0) v1.push_back(arr[i]);
         else v2.push_back(arr[i]);
     }
        
        for(int i=0; i<v1.size(); i++){
            arr[i]=v1[i];
        }
        for(int i=0; i<v2.size(); i++){
            arr[i+v1.size()]=v2[i];
        }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends