class Solution {
public:
    void setRow(int i, int m, vector<vector<int>> &matrix){
        for(int j=0;j<m;j++){
            if(matrix[i][j]!=0){
                matrix[i][j]=-9999;
            }
        }
    }
    
    void setCol(int j, int n, vector<vector<int>> &matrix){
        for(int i=0;i<n;i++){
            if(matrix[i][j]!=0){
                matrix[i][j]=-9999;
            }
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    flag=1;
                    setRow(i, m, matrix);
                    setCol(j, n, matrix);
                }
            }
        }
        
        if(flag==1){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(matrix[i][j]==-9999){
                        matrix[i][j]=0;
                    }
                }
            }   
        }
    }
   
};