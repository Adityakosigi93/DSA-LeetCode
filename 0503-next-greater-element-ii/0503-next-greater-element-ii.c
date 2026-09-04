/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int n=0;
    int *ans = malloc(numsSize * sizeof(int));
    for(int l=0;l<numsSize;l++){
        int flag=0,b=0;
        for(int i=(l+1)%numsSize;i!=l;i=(i+1)%numsSize){
            
            if(nums[i]>nums[l]){
                flag=1;
                ans[n++]=nums[i];
                break;
            }
        }
        if(flag==0){
            ans[n++]=-1;
        }
    }
    *returnSize=numsSize;
    return ans;
    
}