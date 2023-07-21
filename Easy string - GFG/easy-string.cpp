//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends

string lowercase(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z')
        s[i] +=32;
    }
    return s;
}

string transform(string s){
    //complete the function here
   s = lowercase(s);
    string str = "";
    for (int i = 0; i < s.length(); i++) {
        int res = 1;
        while (s[i] == s[i+1]) {
            res++;
            i++;
        }
        str += (to_string(res) + s[i]);
    }
    return str;
}


//stack<char> st;
    
    // for(int i=0; i<s.size(); i++){
    //     if(st.empty()) st.push(s[i]);
        
    //     if(st.top() == s[i]) st.pop()
    // }  
