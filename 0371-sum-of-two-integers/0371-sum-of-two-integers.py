class Solution:
    def getSum(self, a: int, b: int) -> int:
        mask=0xFFFFFFFF     # 32-bits of 1
        int_max=0x7FFFFFFF  
        while b:
            carry=((a&b)<<1)& mask
            a=(a^b)&mask
            b=carry
        if a<=int_max:
            return a
        else:
            return ~(a^mask)