//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
     if(s[0]==')' || s[0]=='}' || s[0]==']') return 0;
    stack<int>st;
    st.push(0);
    for(int i=1;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(i);
        else if(!st.empty() and ((s[i]==')' and s[st.top()]=='(') || (s[i]=='}' and s[st.top()]=='{') || 
        (s[i]==']' and s[st.top()]=='['))){
            st.pop();
        }
        else return false;
    }
    return st.empty();
    // code here
}