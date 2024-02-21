class Solution {
    
private:
    void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
   
    for (int j = 0; j < m; j++){  // set all non-zero elements as -1 in the row i:
        if (matrix[i][j] != 0){
            matrix[i][j] = '*';
        }
    }
    }


    void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    
    for (int i = 0; i < n; i++) {  // set all non-zero elements as -1 in the col j:
        if (matrix[i][j] != 0) {
            matrix[i][j] = '*';
        }
    }
    }
    
public:
    void setZeroes(vector<vector<int>>& matrix) {
          int n=matrix.size();
          int m =matrix[0].size();
        
          for (int i = 0; i < n; i++) {
           for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
           }
          }

    
          for (int i = 0; i < n; i++) {// Finally, mark all -1 as 0:
            for (int j = 0; j < m; j++) {
              if(matrix[i][j] == '*') {
                matrix[i][j] = 0;
              }
            }
          }
    }
};



//TC=O(2XnXm)  sc=O(n) + O(m)
//         int n=matrix.size();
//         int m =matrix[0].size();
//         int col[m]={0};
//         int row[n]={0};
//         for(int i=0; i<n; i++){
//             for(int j=0 ; j<m; j++){
//                 if(matrix[i][j]==0){
//                    row[i]=1;
//                    col[j]=1;
//                 }
//             }
//         }  
//         for(int i=0; i<n; i++){
//             for(int j=0 ; j<m; j++){
//              if(row[i]||col[j]) matrix[i][j]==0;  
//             }
//         }