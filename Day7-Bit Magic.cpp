#include<bits/stdc++.h>
using namespace std;

// Problem link 
//https://practice.geeksforgeeks.org/problems/ed0422e992899f3f46340ce97b0090683ceebd67/1

class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
        int miss=0;
        int i=0 , j = n-1;
        while(i<=j){
            if(arr[i++] != arr[j--]) miss++;
        }
        if(miss==0) return 0;
        
        return miss%2==0?miss>>1:(miss>>1) + 1;
        
    }
};
