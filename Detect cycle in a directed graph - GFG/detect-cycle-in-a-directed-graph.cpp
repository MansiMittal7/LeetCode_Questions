//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  
  private: 
  bool dfsCkeck(int node, vector<int> adj[], int vis[], int pathVis[]){
      vis[node] =1;
      pathVis[node] =1;
      
          //traverse for adjacent nodes 
          for(auto it: adj[node]){
          if(!vis[it]){ //when node is not visited
              if(dfsCkeck(it,adj,vis,pathVis)==true) return true;
          }
          //if node has been previously visited , but has to be visited on same path
          else if(pathVis[it]) return true;
          }
      
      pathVis[node]=0;
      return false;
      
  }
  
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V] = {0};
        int pathVis[V] = {0};
        
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(dfsCkeck(i,adj,vis,pathVis)==true)return true;
            }
        }
        
         return false;
    }
};
//TC= O(n+2E)
//SC= O(N)+ O(N) = O(N)








//by bfs
//   private: 
//   bool detect(int src, vector<int> adj[], int vis[]){
//       vis[src] =1;
//       queue<pair<int,int>>q;
//       q.push({src,-1});
//       while(!q.empty()){
//           int node = q.front().first;
//           int parent = q.front().second;
          
//           q.pop();
          
//           for(auto adjacentNode: adj[node]){
//           if(!vis[adjacentNode]){
//               vis[adjacentNode]=1;
//               q.push({adjacentNode, node});
//           }
          
//           else if(parent != adjacentNode) return true;
//           }
//       }
      
//       return false;
      
//   }
  
//   public:
    // Function to detect cycle in a directed graph.
    // bool isCyclic(int V, vector<int> adj[]) {
        // code here
        // int vis[V] = {0};
        // for(int i=0; i<V; i++){
        //     if(!vis[i]){
        //         if( detect(i,adj,vis) )return true;
        //     }
        // }
        
        //  return false;
//     }
// };
//TC= O(n+2E)
//SC= O(N)+ O(N) = O(N)

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends