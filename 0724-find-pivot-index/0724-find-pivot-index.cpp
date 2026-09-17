class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            int sum1=0,sum2=0;
            for(int h=0;h<i;h++){
                sum1+=nums[h];
            }
            for(int j=i+1;j<nums.size();j++){
                sum2+=nums[j];
            }
            if(sum1==sum2){
                return i;
            }
        }
        return -1;
    }
};