//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    //code here
    int n=s.size();
    string temp="";
     unordered_set<string> st;
//   vector<string> v;
    for(int i=0; i<n-1; i++){
        temp+=s[i];
        temp+=s[i+1];
        // v.push_back(temp);
        st.insert(temp);
        temp="";
    }
    
    return st.size();
    
}