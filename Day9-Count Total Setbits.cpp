#include<bits/stdc++.h>
using namespace std;

// problem link 
//https://practice.geeksforgeeks.org/problems/1132bd8ee92072cd31441858402641d6800fa6b3/1

class Solution {
  public:
    long long countBits(long long N) {
        // code here
        long long ct =0;
        for(long long int i=1;i<=N;i++){
            ct+=__builtin_popcount(i);
        }
        
        return ct;
    }
};