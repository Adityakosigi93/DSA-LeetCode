void nextPermutation(int* nums, int numsSize) {
    int index=-1;
    for(int i=numsSize-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        int i=0,j=numsSize-1,temp;
        while(i<j){
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        return;
    }
    for(int i=numsSize-1;i>0;i--){
        int temp;
        if(nums[i]>nums[index]){
            temp=nums[i];
            nums[i]=nums[index];
            nums[index]=temp;
            break;
        }
        
    }
    int i=index+1,j=numsSize-1,temp;
    while(i<j){
        temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }
    return;
}