class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        MAX_INT = 2**31 - 1
        MIN_INT = -2**31
        if dividend == MIN_INT and divisor == -1:
            return MAX_INT
        

        sign = -1 if (dividend < 0) ^ (divisor < 0) else 1
        A = abs(dividend)
        B = abs(divisor)
        
        i = 0
        while A >= B:
            temp = B
            count = 1
            while A >= (temp << 1):
                temp <<= 1
                count <<= 1
            A -= temp
            i += count
        
        return sign * i
