class Solution:
    '''
    def distributeTicket(self, N : int, K : int) -> int:
        
        # Code Here
        s=1 
        e = N
        left2Right = True
        
        while s<e:
            if(e-s<=K):
                if left2Right:
                    return s
                else:
                    return e
            
            if left2Right:
                s+=self.K
            else:
                e-=self.K
            
            if left2Right:
                left2Right=False
            else:
                left2Right = True
        
        return 1
        
        '''
    def distributeTicket(self, N : int, K : int) -> int:
        # Code Here
        left, right = 1, N
        while left < right:
            if left + K >= right:
                return right
            left += K
            if right - K <= left:
                return left
            right -= K
        return left    
            
        
