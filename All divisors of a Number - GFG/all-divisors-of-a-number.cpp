//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int N) {
        // Code here.
        
        if(N==1) cout<<1;
        
        else {
        vector<int> v;
         v.push_back(1);
         v.push_back(N);
         
        for(int i=2; i*i<=N;i++){
            if(N%i==0){
                // cout<<i<<" "<<N/i<<" ";
                v.push_back(i);
                 if(i!=N/i) v.push_back(N/i);
            }
        }
        
        sort(v.begin(), v.end());
        
        for(int i=0; i<v.size();i++) cout<<v[i]<<" ";
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends