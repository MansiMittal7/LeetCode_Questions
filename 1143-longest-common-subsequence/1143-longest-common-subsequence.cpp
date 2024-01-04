class Solution {
//space optimization 
    
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n=text1.size(), m=text2.size();
         vector<int> prev(m+1,0), curr(m+1,0);
        for(int j=0;j<=m;j++) prev[j]=0;
        
        for(int i=0;i<=n;i++) curr[0]=0;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]) curr[j]=1+prev[j-1];
                else curr[j]=max(prev[j] , curr[j-1]);
            }
            prev=curr;
        }
        
        return curr[m];
    }
};


//memoization solution 
// private:
//     int f(int i,int j , string t1, string t2, vector<vector<int>> dp){
//     if(i<0 || j<0)  return 0;
    
//     if(dp[i][j]!=-1) return dp[i][j];
    
//     if(t1[i]==t2[j]) 
//         return dp[i][j]=1+f(i-1, j-1, t1,t2,dp);
    
//     return dp[i][j]=max( f(i-1, j, t1,t2,dp), f(i, j-1, t1,t2,dp) );
        
//     }
    
// public:
//     int longestCommonSubsequence(string text1, string text2) {
        
//         int n=text1.size(), m=text2.size();
//         vector<vector<int>> dp(n, vector<int>(m,-1));
//         return f(n-1,m-1,text1, text2,dp);



//tabulation solution     
// public:
//     int longestCommonSubsequence(string text1, string text2) {
        
//         int n=text1.size(), m=text2.size();
//         vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
//         for(int j=0;j<=m;j++) dp[0][j]=0;
        
//         for(int i=0;i<=n;i++) dp[i][0]=0;
        
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1];
//                 else dp[i][j]=max(dp[i-1][j] , dp[i][j-1]);
//             }
//         }
        
//         return dp[n][m];