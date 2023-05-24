#problem link
#https://practice.geeksforgeeks.org/problems/5bfe93cc7f5a214bc6342709c78bc3dceba0f1c1/1

from typing import List
class Solution:
    def getMaximum(self, N : int, arr : List[int]) -> int:
        
        # code here
        sum=0
        for x in arr:
            sum+=x
        for num in reversed(range(N+1)):
            if sum%num == 0:
                return num
        
        return -1

