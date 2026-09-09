bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int low=0,high=matrixSize*(*matrixColSize)-1,mid=-1;
    
            while(low<=high ){
                int mid=(low+high)/2;
                int row=mid/(*matrixColSize);
                int col=mid%(*matrixColSize);
                if(matrix[row][col]==target){ 
                    return true;
                }
                else if(matrix[row][col]>target){
                    high=mid-1;
                   
                }
                else{
                    low=mid+1;
                }
            }
        
   
    
    return false;
}