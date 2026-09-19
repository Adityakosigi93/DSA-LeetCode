class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int hash[3000]={0};
        for(int i=0;i<arr.size();i++){
            hash[arr[i]+1000]++;
        }
        for(int i=0;i<2000;i++){
            for(int j=i+1;j<2000;j++){
                if(hash[i]==hash[j] && hash[j]!=0 && hash[i]!=0){
                    return false;
                }
            }
        }
        return true;

    }
};