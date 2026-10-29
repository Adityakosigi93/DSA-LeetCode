class Solution:
    def findDuplicate(self, nums: list[int]) -> int:
        hash={}
        for i in nums:
            hash[i]=hash.get(i,0)+1
        for key,value in hash.items():
            if value>1:
                return key