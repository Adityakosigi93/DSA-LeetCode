int singleNonDuplicate(int* nums, int numsSize) {
    if(numsSize==1){
        return nums[0];
    }
    
    for(int i=0;i<=numsSize-1;i+=2){
        if(i+1==numsSize){
            return nums[i];
        }
        if(nums[i]!=nums[i+1]){
            return nums[i];
        }
        
        
    }
    return -1;
}