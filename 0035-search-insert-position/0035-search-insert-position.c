int searchInsert(int* nums, int numsSize, int target) {
    int low=0,high=numsSize-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }       
    }
    int i;
    if(numsSize==1){
        if(target<nums[0]){
            return 0;
        }
        else{return 1;}
    }
    for(i=0;i<numsSize-1;i++){
        if(target<nums[i]){
            return i;
        }
        
    }
    if(target>nums[numsSize-1]){
        return i+1;
    }
    return i;
}