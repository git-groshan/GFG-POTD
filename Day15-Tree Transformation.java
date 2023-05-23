//Problem link 
//https://practice.geeksforgeeks.org/problems/fbcd1787378ed396a8f24b47872cbc0ad2624f1d/1
 import java.util.*;

class Solution {
    public static int solve(int N, int[] p) {
        int[] arr = new int[N];
        Arrays.fill(arr, 0);
        
        for (int i = 1; i < N; i++) {
            arr[p[i]]++;
            arr[i]++;
        }
        
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] == 1) {
                count++;
            }
        }
        
        if (count == N) {
            return 0;
        }
        
        return N - 1 - count;
    }
}