class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        low=0
        high=len(numbers)-1
        result=[]
        while(low<=high):
            if numbers[low]+numbers[high]==target:
                result.append(low+1)
                result.append(high+1)
                break
            elif numbers[low]+numbers[high]>target:
                high=high-1
            else:
                low=low+1
        
        return result