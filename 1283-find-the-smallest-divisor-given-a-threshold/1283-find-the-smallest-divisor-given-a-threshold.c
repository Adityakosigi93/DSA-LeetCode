int smallestDivisor(int* nums, int numsSize, int threshold) {
    int max=nums[0];
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    int low=1,high=max,mid;
    while(low<=high){
        mid=(low+high)/2;
        int sum=0;
        for(int k=0;k<numsSize;k++){
           
            sum+=ceil((double)nums[k]/mid);
        }
        if(sum<=threshold){
            high=mid-1;
            
        }
        else if(sum>threshold){
            low=mid+1;
        }

    }
    
    return low;   
}