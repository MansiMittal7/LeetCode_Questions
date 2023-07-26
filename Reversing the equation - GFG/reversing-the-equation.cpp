//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
           stack<string> st;
        for(int i = 0; i < s.length(); i++){
        string temp = "";
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') temp = s[i];
        else {
            while (s[i] >= '0' && s[i] <= '9') {temp += s[i]; i++;}
            i--;
        }
        st.push(temp);
    }
    s = "";
    while (!st.empty()) {
        s += st.top();
        st.pop();
    }
    return s;
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends