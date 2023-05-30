//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int a[], int n)
{
    // Your code goes here
    // sort(a.begin(),a.end());
    int o=n-1;
    sort(a, a+o);
    if(a[0]==1){
    int ans=a[o-1]+1;
    for(int i=1; i<o;i++){
        if(a[i]!=a[i-1]+1){
        ans= a[i-1]+1;
         break;
        }
    }
     return ans;
    }
    else{
        int ans=a[0]-1;
        for(int i=1; i<o;i++){
        if(a[i]!=a[i-1]+1){
        ans= a[i-1]+1;
         break;
        }
    }
     return ans;
    }
        
       
}
