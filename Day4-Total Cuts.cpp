#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        vector<int>rightMIN(N);
        rightMIN[N-1] = INT_MAX;
        int cut =0;
        for(int i=N-2;i>=0;i--){
            rightMIN[i] = min(A[i+1] , rightMIN[i+1]);
            
        }
        
        int leftMax = 0;
        
        for(int i=0;i<N;i++){
            leftMax = max(leftMax , A[i]);
            
            int sum = leftMax + rightMIN[i];
            
            if(sum>=K) cut++;
        }
        
        return cut;
    }
};
