class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        int temp=-1;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    if(i==0) temp=0;
                    else{
                        matrix[0][j]=0;
                        matrix[i][0]=0;
                    }
                }
            }
        }
        for(int i=1;i<row;i++){
            if(matrix[i][0]==0){
                for(int j=0;j<col;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<col;i++){
            if(matrix[0][i]==0){
                for(int j=0;j<row;j++){
                    matrix[j][i]=0;
                }
            }
        }
        if(temp==0){
            for(int i=0;i<col;i++) matrix[0][i]=0;
        }
    }
};