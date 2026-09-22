class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int> arr;
        int k=0;
        for(auto x:mp){
            if(x.second==1){
                arr.push_back(x.first);
            }
        }
        return arr;
    }
};