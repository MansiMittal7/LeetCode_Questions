//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    void dfs(vector<int> adj[],vector<int> &vis,vector<int> &ls,int start){
        ls.push_back(start);
        vis[start] = 1;
        for(auto itr : adj[start]){
            if(vis[itr] == 0)dfs(adj,vis,ls,itr);
        }
    }
    public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        vector<int> ls;
        dfs(adj,vis,ls,0);
        return ls;
    }
    
//   private:
  
//   void dfs(int node, vector<int> adj[] , int & vis[] , int & V , vector<int> & ls){
    
//     vis[node] = 1;
//     ls.push_back(node);
//     //traverse all its nodes
//     for(auto it: adj[node]){
//         if(!vis[it]){
//             dfs(it, adj, vis, ls);
            
//         }
//     }
       
//   }
  
//   public:
//     // Function to return a list containing the DFS traversal of the graph.
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         // Code here
        
//         int vis[V] = {0};
//         int start = 0;
//         vector<int> ls;
//         dfs(start, adj, vis, ls);
//         return ls;
//     }
};

//SC= O(N)+O(N)+O(N)  = O(N)
//TC= 

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends