import java.util.*;
import java.io.*;
import java.lang.*;

class Solution {
    static long maxDiamonds(int[] A, int N, int K) {
        // code here
        PriorityQueue<Integer>maxHeap = new PriorityQueue<Integer>(Collections.reverseOrder());
        for(int i=0;i<N;i++){
            maxHeap.add(A[i]);
        }
        long ans = 0;
        
        while(K>0){
            int top = maxHeap.peek();
            maxHeap.poll();
            ans+=top;
            top>>=1;
            maxHeap.add(top);
            K--;
        }
        
        return ans;
        
        
    }
};
