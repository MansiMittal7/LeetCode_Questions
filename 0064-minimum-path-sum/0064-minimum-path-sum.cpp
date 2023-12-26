class Solution {
    //memoization solution
private:
    int f(int i,int j,vector<vector<int>>& grid, vector<vector<int>> & dp){
        //defining base case
        if(i==0 && j==0) return grid[i][j];
        if(i<0 || j<0 ) return 1e9 ;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int up = grid[i][j] + f(i-1,j,grid,dp);
        int left=grid[i][j] + f(i,j-1,grid,dp);
        
        return dp[i][j]= min(left,up);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
         vector<vector<int>> dp(n,vector<int>(m,-1));
        
         return f(n-1,m-1,grid,dp);
    }
};

//recursive solution
// private:
//     int f(int i,int j,vector<vector<int>>& grid){
//         //defining base case
//         if(i==0 && j==0) return grid[i][j];
//         if(i<0 || j<0 ) return 1e9 ;
        
//         int up = grid[i][j] + f(i-1,j,grid);
//         int left=grid[i][j] + f(i,j-1,grid);
        
//         return min(left,up);
//     }
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
                
//         return f(n-1,m-1,grid);
//     }  