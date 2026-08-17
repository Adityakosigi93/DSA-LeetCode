int* searchRange(int* nums,int numsSize,int target,int* returnSize){
    int *arr=(int *)malloc(2*sizeof(int));
    int low=0,high=numsSize-1,mid,pos;
    arr[0]=-1;
    arr[1]=-1;
    while(low<=high){
        mid=(low+high)/2;
        
        if(target==nums[mid]){
            
            arr[0]=mid;
            
            int low2=mid,high2=numsSize-1,mid2;
            while(low2<=high2){
                mid2=(low2+high2)/2;
                if(nums[mid2]==target){
                    arr[1]=mid2;
                    low2=mid2+1;
                }
                else if(nums[mid2]>target){
                    high2=mid2-1;
                }
                else{
                    low2=mid2+1;
                }
            }
            high=mid-1;
        }
        else if(target<=nums[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    *returnSize=2;
    return arr;
}