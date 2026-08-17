int search(int* nums, int numsSize, int target) {
    int low=0,high=numsSize-1,mid,pos=numsSize-1;
     for(int i=0;i<numsSize-1;i++){
        if(nums[i]>nums[i+1]){
            pos=i;
        }
     }
     low=0,high=pos;
     
     while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
            
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
    low=pos+1,high=numsSize-1;
    
     while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
            
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
    
     return -1;
}