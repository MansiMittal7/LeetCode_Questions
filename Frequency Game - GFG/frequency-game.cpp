//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        map<int,int> m;
        for(int i=0; i<n; i++) m[arr[i]]++;
        int mini=INT_MAX,maxi=INT_MIN;
        vector<int>v;
        
        for(auto it:m){
           if(it.second<=mini)  mini=min(mini,it.second);
        }
        //  return mini;
        for(auto it:m){
            if(it.second==mini) v.push_back(it.first);
        }
        // for(int i=0; i<v.size();i++) cout<<v[i]<<" ";
        
        for(int i=0; i<v.size();i++){
            if(v[i]>maxi) maxi=(maxi, v[i]);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends