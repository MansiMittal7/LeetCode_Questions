
class DisjointSet {
public:
    vector<int> rank, parent, size;
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int upu(int u){
        if (u==parent[u]) return u;
       return  parent[u]=upu(parent[u]);
       
    }
    void unibysize(int u,int v){
        if (upu(u)==upu(v)) return ;
        int up_u=upu(u);
        int up_v=upu(v);
        if (size[up_u]>size[up_v]){
            parent[up_v]=up_u;
            size[up_u]+=size[up_v];
        }
        else {
            parent[up_u]=up_v;
            size[up_v]+=size[up_u];
        }
    }
};

class Solution {
private:
    bool isValid(int newr,int newc, int n){ //checking wether the index lies inside the grid or not 
        return newr>=0 && newc>=0 && newc<n && newr<n;
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        DisjointSet ds(n*n);
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(grid[row][col]==0) continue; 
                int dr[]={-1,0,1,0};
                int dc[]={0,-1,0,1};
                
                for(int i=0;i<4;i++){
                    int newr=row+dr[i];
                    int newc=col+dc[i];
                    if(isValid(newr,newc,n) && grid[newr][newc]==1){
                        int nodeNo = row*n +col;
                        int adjNodeNo = newr*n + newc;
                        ds.unibysize(nodeNo, adjNodeNo);
                    }
                }
            }
        }
        
        int mx=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(grid[row][col]==1) continue; 
             
                int dr[]={-1,0,1,0};
                int dc[]={0,-1,0,1};
                set <int> components;
                for(int i=0;i<4;i++){
                    int newr=row+dr[i];
                    int newc=col+dc[i];
                    if(isValid(newr,newc,n) ){
                        if( grid[newr][newc]==1)
                        components.insert(ds.upu(newr*n+newc));
                    }
                }
                int sizeTotal=0;
                for(auto it:components){
                    sizeTotal+=ds.size[it];
                }
                mx=max(mx,sizeTotal+1);
            }
        }
        
        for(int cellNo=0; cellNo<n*n ; cellNo++){
            mx=max(mx, ds.size[ds.upu(cellNo)]);
        }
        return mx;
    }
};