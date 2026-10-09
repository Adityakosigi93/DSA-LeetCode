class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        nums2=nums.copy()
        nums2.sort()
        low=0
        high=len(nums2)-1
        list2=[]
        sum=0
        while(low<=high):
            sum=nums2[low]+nums2[high]
            if(sum==target):
                list2.append(nums2[low])
                list2.append(nums2[high])
                break

            elif(sum>target):
                high=high-1
            
            else:
                low=low+1

        list3=[]
        
        for i in range(len(nums)):
            if nums[i]==list2[0]:
                list3.append(i)
        for i in range(len(nums)):
            if nums[i]==list2[1]:
                list3.append(i)
        list4=list(set(list3))
        return list4
        

