class Solution:
    def findMoves(self,n,chairs,passengers):
        #code here
        chairs.sort()
        passengers.sort()
        ans=0
        for i in range(0,n):
            ans = ans + abs(chairs[i] - passengers[i])
        return ans