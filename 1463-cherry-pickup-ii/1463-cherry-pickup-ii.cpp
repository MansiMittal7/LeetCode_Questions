class Solution {
//memoization approach 
private:
    int f(int i, int j1, int j2,int r, int c, vector<vector<int>>& grid, vector<vector<vector<int>>> & dp){
        
        if(j1<0 || j2<0 || j1>=c || j2>=c) return -1e8;
        
        if(i==r-1){
            if(j1==j2) return grid[i][j1];
            else return grid[i][j1]+grid[i][j2];
        }
        
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        
        // explore all paths of robo1 and robo2 simaltaneously 
        int maxi=-1e8;
        for(int dj1=-1;dj1<=+1; dj1++){
            for(int dj2=-1;dj2<=+1; dj2++){
                int value=0;
                if(j1==j2) value = grid[i][j1];
                else value = grid[i][j1]+grid[i][j2];
                value+=f(i+1,j1+dj1, j2+dj2,r,c,grid,dp);
                maxi=max(maxi,value);
                
            }
        }
        return dp[i][j1][j2] = maxi;
    }
    
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int r= grid.size();
        int c= grid[0].size();
        
        //dp[r][c][c]
        vector<vector<vector<int>>> dp(r, vector<vector<int>> (c,vector<int>(c,-1)));
        return f(0,0,c-1,r,c,grid,dp);
        
    }
};

//reccursive approach 
// private:
//     int f(int i, int j1, int j2,int r, int c, vector<vector<int>>& grid){
        
//         if(j1<0 || j2<0 || j1>=c || j2>=c) return -1e8;
        
//         if(i==r-1){
//             if(j1==j2) return grid[i][j1];
//             else return grid[i][j1]+grid[i][j2];
//         }
//         // explore all paths of robo1 and robo2 simaltaneously 
//         int maxi=-1e8;
//         for(int dj1=-1;dj1<=+1; dj1++){
//             for(int dj2=-1;dj2<=+1; dj2++){
//                 int value=0;
//                 if(j1==j2) value = grid[i][j1];
//                 else value = grid[i][j1]+grid[i][j2];
//                 value+=f(i+1,j1+dj1, j2+dj2,r,c,grid);
//                 maxi=max(maxi,value);
                
//             }
//         }
//         return maxi;
//     }
    
// public:
//     int cherryPickup(vector<vector<int>>& grid) {
//         int r= grid.size();
//         int c= grid[0].size();
        
//         return f(0,0,c-1,r,c,grid);