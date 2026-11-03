class Solution:
    def addDigits(self, num: int) -> int:
        if num==0:
            return 0
        n=num
        
        while(1):
            sum=0
            while(n!=0):
                digit=n%10
                sum+=digit
                n=n//10
            n=sum
            h=n
            if h//10==0:
                return n


        