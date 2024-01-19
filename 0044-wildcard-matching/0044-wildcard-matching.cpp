class Solution {
    
private:
    int f(int i, int j , string & pattern , string & text, vector<vector<int>> & dp){
        if(i<0 && j<0) return true; //both strings got exhausted 
        if(i<0 && j>=0) return false; // pattern got exhausted
        
        if(j<0 && i>=0){ //if string got exhausted but still some pattern is left
            for(int ii=0; ii<=i; ii++){
                if(pattern[ii]!='*') return false;
            }
            return true;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        if(pattern[i]==text[j] || pattern[i]=='?')
            return dp[i][j]=f(i-1, j-1, pattern, text,dp);
        
        if( pattern[i]=='*'){
             return dp[i][j]= f(i-1, j, pattern, text,dp) | f(i, j-1, pattern, text,dp);
        }
        
        return dp[i][j] = false;
    }
    
public:
    bool isMatch(string s, string p) {
        
     int n=p.size();
     int m=s.size();
     vector<vector<int>>dp(n, vector<int>(m,-1));
     return f(n-1, m-1, p, s,dp);
    }
};

//reccurssion
// private:
//     int f(int i, int j , string & pattern , string & text){
//         if(i<0 && j<0) return true; //both strings got exhausted 
//         if(i<0 && j>=0) return false; // pattern got exhausted
        
//         if(j<0 && i>=0){ //if string got exhausted but still some pattern is left
//             for(int ii=0; ii<=i; ii++){
//                 if(pattern[ii]!='*') return false;
//             }
//             return true;
//         }
        
//         if(pattern[i]==text[j] || pattern[i]=='?')
//             return f(i-1, j-1, pattern, text);
        
//         if( pattern[i]=='*'){
//              return f(i-1, j, pattern, text) | f(i, j-1, pattern, text);
//         }
        
//         return false;
//     }
    
// public:
//     bool isMatch(string s, string p) {
        
//      int n=p.size();
//      int m=s.size();
    
//     return f(n-1, m-1, p, s);