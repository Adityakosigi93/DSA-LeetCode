

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *arr = malloc(numsSize * sizeof(int)),k=0;
    for(int i=0;i<n;i++){
        arr[k]=nums[i];
        k+=2;
    }
    k=1;
    for(int i=n;i<numsSize;i++){
        arr[k]=nums[i];
        k+=2;
    }
    *returnSize=numsSize;
    return arr;
}