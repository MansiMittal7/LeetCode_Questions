//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    // code here
    for(int i=0; i<n; i++){
        if(arr[i]==x) v.push_back(i);
       
    }
     int p=v.size()-1;
    // for(int i=0; i<v.size();i++)
    // cout<<v[0];
    // <<" "<<v[v.size()-1];
    if(v.size()==0) return {-1,-1};
    else return {v[0],v[p]};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends