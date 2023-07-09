//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        vector<int> v;
        
        for(auto it:mp ){
            // if(it.second!=1)
            v.push_back(it.second);
        }
        
        sort(v.begin(), v.end());
        
        int a=1;
        for(int i=0; i<v.size(); i++){
           
                if(v[i]==v[i-1]) a=0;
               
            
                // cout<<v[i];
        }
        
                if(a==1) return true;
                else return false; 
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends