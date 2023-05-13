//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    int n= str.size();
    string rev="";
    for(int i=n-1; i>=0; i--){
        rev=rev+str[i];
    }
    // cout<<rev<<"\n";
    return rev;
  //Your code here
}

