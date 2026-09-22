class Solution {
public:
    int hammingWeight(int n) {
        int n2=n;
        int arr[32],k=0,count=0;
        while(n2>0){
            arr[k++]=n2%2;
            n2=n2/2;
        }
        for(int i=0;i<k;i++){
            if(arr[i]==1){
                count++;
            }
        }
        return count;
    }
};