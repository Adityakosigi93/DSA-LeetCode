/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int left[numsSize],right[numsSize];
    int *arr=(int *)malloc(numsSize*sizeof(int));

    
    for(int i=0;i<numsSize;i++){
        left[i]=right[i]=nums[i];
    }
    left[0]=1;
    for(int i=1;i<numsSize;i++){
        left[i]=left[i-1]*nums[i-1];
    }
    right[numsSize-1]=1;
    for(int i=numsSize-2;i>=0;i--){
        right[i]=right[i+1]*nums[i+1];
    }
    
    for(int i=0;i<=numsSize-1;i++){
        arr[i]=left[i]*right[i];
    }
    *returnSize=numsSize;
    return arr;

    *returnSize=numsSize;
    return arr;
}