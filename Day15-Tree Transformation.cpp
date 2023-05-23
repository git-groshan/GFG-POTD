#include<bits/stdc++.h>
using namespace std;
//Problem link 
//https://practice.geeksforgeeks.org/problems/fbcd1787378ed396a8f24b47872cbc0ad2624f1d/1

class Solution {
    public:
    int solve(int n, vector<int>p){
        // code here
        int i,ans=n-1;
        vector<int>degree(n+1,0);
        for(i=1;i<n;i++){
            degree[p[i]]++;
            degree[i]++;
        }
        for(i=0;i<n;i++)if(degree[i]==1)ans--;
        
        if(ans<0)return 0;
        return ans;
    }
};