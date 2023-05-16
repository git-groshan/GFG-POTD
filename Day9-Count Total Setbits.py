class Solution:
    def countBits(self, N : int) -> int:
        
        # code here
        count =0
        for i in range(1, N+1):
            binary = bin(i)
            count = count + binary.count("1")
        
        return count