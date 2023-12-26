class Solution {
//space optimization
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int mod=(2e9+7);
        int n=obstacleGrid.size(); //nXm matrix
        int m=obstacleGrid[0].size();
        
        vector<int> prev(m,0);
        for(int i=0; i<n;i++){
            vector<int> curr(m,0);
            for(int j=0;j<m;j++){
                if(obstacleGrid[i][j]==1) curr[j]=0;
                else if(i==0 && j==0) curr[j]=1;
                
                else{
                    int up=0, left=0;
                    if(i>0) up=prev[j];
                    if(j>0) left=curr[j-1];
                    
                    curr [j]=(up+left)%mod;
                }
            }
            prev=curr;
        }
        return prev[m-1];
    }
};

//recursion methond 
// private:
//     int f(int i,int j,vector<vector<int>>& obstacleGrid){
//         if(i>=0 && j>=0 && obstacleGrid[i][j]==-1) //defining base case
//         if(i==0 && j==0) return 1;
//         if(i<0 || j<0) return 0;
        
//         int up=f(i-1,j,obstacleGrid);
//         int left=f(i,j-1,obstacleGrid);
        
//         return up+left;
//     }
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
//         int n=obstacleGrid.size(); //nXm matrix
//         int m=obstacleGrid[0].size();
        
        
//         return f(n-1,m-1,obstacleGrid,dp);
//     }



//memoization methond 
// private:
//     int f(int i,int j,vector<vector<int>>& obstacleGrid, vector<vector<int>> & dp){
//         if(i>=0 && j>=0 && obstacleGrid[i][j]==-1) //defining base cases
//         if(i==0 && j==0) return 1;
//         if(i<0 || j<0) return 0;
//         if(dp[i][j]!=-1) return dp[i][j];
        
//         int up=f(i-1,j,obstacleGrid,dp);
//         int left=f(i,j-1,obstacleGrid,dp);
        
//         return dp[i][j]=up+left; //storing before returning  
//     }
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
//         int n=obstacleGrid.size(); //nXm matrix
//         int m=obstacleGrid[0].size();
//         vector<vector<int>> dp(n,vector<int>(m,-1));
        
//         return f(n-1,m-1,obstacleGrid,dp);
//     }


//tabulation methond 
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int mod=(2e9+7);
//         int n=obstacleGrid.size(); //nXm matrix
//         int m=obstacleGrid[0].size();
        
//         int dp[n][m];
//         for(int i=0; i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(obstacleGrid[i][j]==1) dp[i][j]=0;
//                 else if(i==0 && j==0) dp[i][j]=1;
                
//                 else{
//                     int up=0, left=0;
//                     if(i>0) up=dp[i-1][j];
//                     if(j>0) left=dp[i][j-1];
                    
//                     dp[i][j]=(up+left)%mod;
//                 }
//             }
//         }
//         return dp[n-1][m-1];