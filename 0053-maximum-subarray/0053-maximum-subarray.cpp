class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         if(nums.size()==1){
            return nums[0];
        }
        int count=0,flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                count++;
            }
            
        }
        if(count==nums.size()){
            flag=1;
        }
        if(flag==1){
            int max2=nums[0];
            for(int i=0;i<nums.size();i++){
                if(nums[i]>max2){
                    max2=nums[i];
                }
            }
            return max2;
        }
        int max1=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum<0){
                sum=0;
            }
            if(sum>max1){
                max1=sum;
            }

        }
        return max1;
    }
};