class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=piles[0];
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        double low=1,high=max;
        while(low<=high){
            int mid=(low+high)/2;
            long long sum=0;
            for(int k=0;k<piles.size();k++){
                sum+=ceil((double)piles[k]/mid);
            } 
            if(sum<=h){
                high=mid-1;
            }
            else if(sum>h){
                low=mid+1;;
            }
             
        }


        return low;
    }
};