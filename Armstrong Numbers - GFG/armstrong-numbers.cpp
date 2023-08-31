//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum=0;
        int tmp=n;
        while(tmp!=0){
            sum+=( (tmp%10)*(tmp%10)*(tmp%10) );
            tmp=tmp/10;
        }
        
        string s="";
        if(sum==n) s="Yes";
        else s= "No";
        
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends