//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int n, vector<int> color, vector<int> radius){
        
        stack<int>c;
        stack<int>r;
        
        for(int i=0;i<n;i++)
        {
            if(c.size()==0)
            {
                c.push(color[i]);
                r.push(radius[i]);
            }
            else
            {
                if(c.top()==color[i] && r.top()==radius[i])
                {
                    c.pop();
                    r.pop();
                }
                else
                {
                    c.push(color[i]);
                    r.push(radius[i]);
                }
            }
        }
        
        return r.size();
        
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends