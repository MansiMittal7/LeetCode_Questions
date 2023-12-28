//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    
        
    void dfs(int node,unordered_map<int,bool> &visited,vector<vector<int>>& adj,stack<int> &st){
    visited[node]=1;
    for(auto i:adj[node]){
        if(!visited[i]){
            dfs(i,visited,adj,st);
        }
    }
    st.push(node);
    }
    void revdfs(int node,unordered_map<int,list<int>> &transpose,unordered_map<int,bool> &visited){
    visited[node]=1;
    for(auto i:transpose[node]){
        if(!visited[i]){
            revdfs(i,transpose,visited);
        }
    }
    }
    
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int v, vector<vector<int>>& adj)
    {
        //code here
        unordered_map<int,bool> visited;
    stack<int> st;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            dfs(i,visited,adj,st);
        }
    }
    unordered_map<int,list<int>> transpose;
    for(int i=0;i<v;i++){
        visited[i]=0;
        for(auto nbr:adj[i]){
            transpose[nbr].push_back(i);
        }
    }
    int count=0;
    while(!st.empty()){
        int top=st.top();
        st.pop();
        if(!visited[top]){
            
            count++;
            revdfs(top,transpose,visited);
        }
    }
    return count;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends