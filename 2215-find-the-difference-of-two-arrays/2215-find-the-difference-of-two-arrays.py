class Solution:
    def findDifference(self, nums1: list[int], nums2: list[int]) -> list[list[int]]:
        
            list1=nums1.copy()
            list2=nums2.copy()
            
            list3=[]
            list4=[]
            list5=nums1.copy()
            list6=nums2.copy()
            for i in nums1:
                for j in nums2:
                    if(i==j):
                        list3.append(i)
            for i2 in nums2:
                for j2 in nums1:
                    if(i2==j2):
                        list4.append(i2)
            list4=list(set(list4))
            list3=list(set(list3))

            for i3 in nums1:
                for j3 in list3:
                    if(i3==j3):
                        list1.remove(j3)
            for i4 in nums2:
                for j4 in list4:
                    if(i4==j4):
                        list2.remove(j4)
            list1=list(set(list1))
            list2=list(set(list2))
            listf=[list1,list2]
            return listf


        
        