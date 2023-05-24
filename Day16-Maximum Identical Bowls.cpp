#include<bits/stdc++.h>
using namespace std;
//problem link 
//https://practice.geeksforgeeks.org/problems/5bfe93cc7f5a214bc6342709c78bc3dceba0f1c1/1

class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
        long long sum = 0;
        for(int x :arr) sum+=x;
        
        for(int i=N;i>=0;i--){
            if(sum%i==0) return i;
        }
        
        return -1;
    }
};