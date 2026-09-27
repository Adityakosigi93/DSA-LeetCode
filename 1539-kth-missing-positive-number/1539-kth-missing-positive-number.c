int findKthPositive(int* arr, int arrSize, int k) {
    int l=k,j=0,i;
    for( i=1;i<=6000;i++){
        if(j<arrSize && i!=arr[j] ){
            l--;
            if(l==0){
                return i;
            }
        }
        else if(j==arrSize){
            l--;
            if(l==0){
                return i;
            }
        }
        
        else{
            if(j<arrSize){
                j++;
            }
        }
    }
    return i;
}