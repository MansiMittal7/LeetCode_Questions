class Solution {
//space optimization 
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        
        vector<int> prev(m+1,0), curr(m+1,0);
        
        for(int j=0;j<=m;j++) prev[j]=j;
        
        for(int i=1;i<=n;i++){
              curr[0]=i;
            for(int j=1;j<=m;j++){
             if(word1[i-1]==word2[j-1]) curr[j] = prev[j-1];
              else curr[j] = 1+min( prev[j] , min( curr[j-1], prev[j-1] ) );   
            }
          prev=curr;
        } 

        return prev[m];
    }
};


//reccursion   
// private:
// int f(int i,int j, string w1, string w2){
   
//     if(i<0) return j+1;
//     if(j<0) return i+1;
    
//     if(w1[i]==w2[j]) return f(i-1,j-1, w1,w2);
    
//     return 1+min( f(i-1,j, w1,w2) , min( f(i,j-1, w1,w2), f(i-1,j-1, w1,w2) ) );
    
// }

// public:
//     int minDistance(string word1, string word2) {
//         int n=word1.size();
//         int m=word2.size();
        
//         return f(n-1, m-1, word1, word2);
//     }
// };



//memoization   
// private:
// int f(int i,int j, string w1, string w2 , vector<vector<int>> dp){
   
//     if(i<0) return j+1;
//     if(j<0) return i+1;
//     if(dp[i][j]!=-1) return dp[i][j];
//     if(w1[i]==w2[j]) return dp[i][j] = f(i-1,j-1, w1,w2,dp);
    
//     return dp[i][j] = 1+min( f(i-1,j, w1,w2,dp) , min( f(i,j-1, w1,w2,dp), f(i-1,j-1, w1,w2, dp) ) );
    
// }

// public:
//     int minDistance(string word1, string word2) {
//         int n=word1.size();
//         int m=word2.size();
        
//         vector<vector<int>> dp(n, vector<int>(m,-1));

//         return f(n-1, m-1, word1, word2, dp);


//tabulation 
// public:
//     int minDistance(string word1, string word2) {
//         int n=word1.size();
//         int m=word2.size();
        
//         vector<vector<int>> dp(n, vector<int>(m+1,0));
        
//         for(int i=0;i<=n;i++) dp[i][0]=i;
//         for(int j=0;j<=m;j++) dp[0][j]=j;
        
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//               if(word1[i]==word2[j]) dp[i][j] = dp[i-1][j-1];
//               else dp[i][j] = 1+min( dp[i-1][j] , min( dp[i][j-1], dp[i-1][j-1] ) );
                
//             } 
//         } 

//         return dp[n][m];