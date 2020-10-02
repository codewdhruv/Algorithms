class Solution:
    def reverse(self, x: int) -> int:
        if x >= 2**31-1 or x <= -2**31: 
            return 0
        else:
            rev = str(x)
            if (rev[0] == "-"):
                reversed = int("-" + rev[1:][::-1])
            else:
                reversed = int(rev[::-1])
            if  reversed>= 2**31-1 or reversed <= -2**31: 
                return 0
            else:
                return reversed
