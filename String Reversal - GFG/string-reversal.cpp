//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    string a;
   
    unordered_map <char,int> z;
    for (int i=s.size()-1; i>=0; i--) {
        if (z.find(s[i])==z.end() && s[i]!=' ') {
           z[s[i]]++;
            a+=s[i];
        }
        
    }
    
    
    return a;
    
    
}

//unordered_map<char,int> m;
    // for(int i=0;i<s.size(); i++){
    //     if(s[i]!=' ')
    //     m[s[i]]++;
    // }
    // string ans="";
    
    // for(auto it:m ){
    //     ans+=it.first;
    // }
    // reverse(ans.begin(),ans.end());
    
    // return ans;
    
    
    
//string rev="";
    // unordered_map<char,int> map;
    // for(int i=s.size()-1;i>=0;i--){
    //     if(map[s[i]]!=1 && !isspace(s[i])){
    //         rev+=s[i];
    //         map[s[i]]=1;
    //     }
    // }
    // return rev; 
    