//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
       map<int, int>m;
    for(int i=0;i<s.length();i++){
        if(s[i]=='b' || s[i]=='a' ||s[i]=='l' ||s[i]=='o' ||s[i]=='n'){
            m[s[i]]++;
        }
    }
    int mini=INT_MAX;
    for(auto it=m.begin(); it!=m.end(); it++){
        if(it->first=='l' || it->first=='o'){
            mini=min(mini, (it->second)/2);
        }else{
            mini=min(mini, it->second);
        }
    }
    return mini;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends