//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        queue<int> temp;
        vector<int> v;
        int n=q.size();
        for(int i=0; i<n/2; i++){
            int a= q.front();
            q.pop();
            temp.push(a);
        }
        
        while(!temp.empty()){
            int val = temp.front();
            temp.pop();
            q.push(val);
            // v.push_back(val);
            
            int b=q.front();
            q.pop();
            q.push(b);
            // v.push_back(b);
        }
        
        while(!q.empty()){
            int c= q.front();
            q.pop();
            v.push_back(c);
        }
         
        
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends