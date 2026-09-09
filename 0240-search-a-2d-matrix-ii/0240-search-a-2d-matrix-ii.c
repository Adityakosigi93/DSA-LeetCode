

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    for(int i=0;i<matrixSize;i++){
        int low=0,high=*matrixColSize-1,k=0;
        while(low<=high ){
                int mid=(low+high)/2;
                int col=mid%(*matrixColSize);
                if(matrix[i][mid]==target){ 
                    return true;
                }
                else if(matrix[i][mid]>target){
                    high=mid-1;
                   
                }
                else{
                    low=mid+1;
                }
                
            }
    }
    return false;
}