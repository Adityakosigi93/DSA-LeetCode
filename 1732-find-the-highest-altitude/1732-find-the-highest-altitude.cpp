class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int arr[gain.size()+1],l=0;
        arr[0]=0;
        for(int i=1;i<=gain.size();i++){
            arr[i]=arr[i-1]+gain[l++];
        }
        int max=arr[0];
        for(int i=0;i<=gain.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};