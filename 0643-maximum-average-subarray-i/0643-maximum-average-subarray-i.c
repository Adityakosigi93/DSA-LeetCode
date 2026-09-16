double findMaxAverage(int* nums, int numsSize, int k) {
    int j=0,h=k,l=0;
    double sum=0,max;
    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    max=sum;
    for(int i=k;i<numsSize;i++){
        sum=sum-nums[l]+nums[i];
        if(sum>max){
            max=sum;
        }
        l++;
    }
    return max/k;

}