void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int row[matrixSize],column[*matrixColSize],k1=0,k2=0;
    
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<*matrixColSize;j++){
            if(matrix[i][j]==0 ){
                row[i]=1;
                column[j]=1;
            }
            
            
        }
    }
    k1=0;
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<*matrixColSize;j++){
            if(row[i]==1 || column[j]==1){
                    matrix[i][j]=0;                
            }
            
        }
    }
    
}