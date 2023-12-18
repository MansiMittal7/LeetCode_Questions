class Solution {

private:
    void dfs(int row,int col, vector<vector<int>> &vis, vector<vector<char>>& board,int delrow[], int delcol[]){
    int n = board.size();  //nXm matrix 
    int m = board[0].size();
        
        
        vis[row][col]=1; //mark visited once reached there
        //check for top,right,bottom,left
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol]=='O'){
            dfs(nrow,ncol,vis,board,delrow,delcol);
        }
            
            
        }
        
    }
public:
    void solve(vector<vector<char>>& board) {
    
    int delrow[]={-1,0,1,0};
     int delcol[]={0,1,0,-1};
        
    int n = board.size();  //nXm matrix 
    if(n == 0) return;  
    int m = board[0].size();
        
    vector<vector<int>> vis(n, vector<int>(m,0));
    //traverse on boundary- first row,first col, last row, last col
        
       
        for(int j=0;j<m;j++){ //traversal of first and last row
            if(!vis[0][j] && board[0][j]=='O'){ //first row
             dfs(0,j,vis,board,delrow,delcol);   
            }
            if(!vis[n-1][j] && board[n-1][j]=='O'){ //last row
             dfs(n-1,j,vis,board,delrow,delcol);      
            }
        }
        for(int i=0;i<n;i++){ //traversal of first and last col
            if(!vis[i][0] && board[i][0]=='O'){ //first col
             dfs(i,0,vis,board,delrow,delcol);   
            }
            if(!vis[i][m-1] && board[i][m-1]=='O'){ //last col
             dfs(i,m-1,vis,board,delrow,delcol);      
            }
        }
        
        //now traverse whole matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && board[i][j]=='O')
                    board[i][j]='X';
            }
        }
        // return board;
    }
};
//set of x connected to a boundary 'o' cant be converted 
//start from boundary Os and mark them that they can never be converted , convert the remaining Os.