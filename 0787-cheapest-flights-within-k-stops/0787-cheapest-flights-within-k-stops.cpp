class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        //creating a graph
        vector<pair<int,int>> adj[n];
        for(auto it: flights) //going across flight info
            adj[it[0]].push_back({it[1],it[2]}); //{node reached,cost}
        
        queue<pair<int,pair<int,int>>> q; //{stops, {node, distance} }
        q.push({0,{src,0}});
        
        vector<int> dist(n,1e9); //distance array
        dist[src]=0;
        
        //dijkstra algo-
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int stops = it.first;
            int node = it.second.first;
            int cost = it.second.second;
            
            if(stops>k) continue; //no need to go to any further adjacent cities 
            for(auto iter: adj[node]){
                int adjacentnode = iter.first;
                int edgeweight=iter.second;
                
                if(cost+edgeweight < dist[adjacentnode]){
                    dist[adjacentnode] = cost+edgeweight;
                    q.push({stops+1, {adjacentnode,cost+edgeweight }});
                }
            }
            
        }
        
        if(dist[dst]==1e9) return -1;
        else return dist[dst];
        
            
    }
};