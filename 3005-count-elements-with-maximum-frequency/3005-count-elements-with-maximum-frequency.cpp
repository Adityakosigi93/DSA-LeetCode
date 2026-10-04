class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int x:nums){
            hash[x]++;
        }
        vector<int>arr;
        int max=0;
        for(auto x:hash){
            if(x.second>=max){
                max=x.second;
            }
        }
        for(auto x:hash){
            if(x.second==max){
                arr.push_back(x.first);
            }
        }
        int count=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<nums.size();j++){
                if(arr[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};