/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int arr[rowIndex+1][rowIndex+1];
    int *arr2 = malloc((rowIndex+1) * sizeof(int));
    for(int i = 0; i <=rowIndex; i++) {
        for(int j = 0, k = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i - 1][k] + arr[i - 1][k + 1];
                k++;
            }
        }
    }
    for(int i=0;i<=rowIndex;i++){
        arr2[i]=arr[rowIndex][i];
    }
    *returnSize=rowIndex+1;
    return arr2;

    
}