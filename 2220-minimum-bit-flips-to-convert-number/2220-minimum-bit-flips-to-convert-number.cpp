int k1=0;
vector<int> binary(int num){
    vector<int> arr;
    while(1){
        int i=num%2;
        arr.push_back(i);
        num=num/2;
        if(num==0){
            break;
        }
    }
    k1=0;
    return arr;
}
class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int> arr1=binary(start);
        vector<int> arr2=binary(goal);
        reverse(arr1.begin(), arr1.end());
        reverse(arr2.begin(), arr2.end());
        int min1=min(arr1.size(),arr2.size());
        int max1=max(arr1.size(),arr2.size());
        int m=max1-min1,i;
        vector<int> arr3;
        vector<int> arr4;
        if(arr1.size()<arr2.size()){
            for(i=0;i<m;i++){
                arr3.push_back(0);
            }
            for(int j=0;j<arr1.size();j++){
                arr3.push_back(arr1[j]);
            }
            for(int h=0;h<arr2.size();h++){
                arr4.push_back(arr2[h]);
            }
        }
        else{
            for(i=0;i<m;i++){
                arr4.push_back(0);
            }
            for(int j=0;j<arr2.size();j++){
                arr4.push_back(arr2[j]);
            }
            for(int h=0;h<arr1.size();h++){
                arr3.push_back(arr1[h]);
            }
        }
        int count=0,k=0;
        for(int i=0;i<arr3.size();i++){
            if(arr3[i]!=arr4[k]){
                count++;
            }
            k++;
        }
        return count;
    }
};