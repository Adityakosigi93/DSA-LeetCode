class Solution:
    def findDifference(self, nums1: list[int], nums2: list[int]) -> list[list[int]]:
        
            set1=set(nums1)
            set2=set(nums2)
            list1=list(set1-set2)
            list2=list(set2-set1)
            listf=[list1,list2]
            return listf


        
        