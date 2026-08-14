void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int mat[matrixSize][*matrixColSize];
    for(int i=0;i<matrixSize;i++){
        for(int j=0;j<*matrixColSize;j++){
            mat[i][j]=matrix[i][j];
        }
    }
    
    for(int i=0;i<matrixSize;i++){
        int k1=matrixSize-1;
        for(int j=0;j<*matrixColSize;j++){
            matrix[i][j]=mat[k1--][i];
        }
    }
}