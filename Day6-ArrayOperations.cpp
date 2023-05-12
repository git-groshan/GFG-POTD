#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        //problem link
        // https://practice.geeksforgeeks.org/problems/3a93b6a25a7b88e4c80a1fee00898fd8022eb108/1
        
        /*
        int i=0;
        bool is_zero = false;
        int ct=0;
        while(i<n){
            if(arr[i]!=0){
                i++;
                continue;
            } 
            else{
                is_zero = true;
                int j = i+1;
                while(j<n and arr[j]==0){
                    j++;
                }
                if(j==n) break;
                i=j;
                
            }
            ct++;
        }
        if(!is_zero) return -1;
        
        return ct;
    }
    */
    
      int ans = 0;
        int zerocnt = 0;
        for(int i = 0; i < n; ++i){
            if(arr[i] == 0){
                zerocnt++;
                if(i > 0 && arr[i-1] != 0) ans++;
            }
        }    
        if(arr[n-1] != 0) ans++;
        
        if(zerocnt == n) return 0;
        if(zerocnt == 0) return -1;
        return ans;
    }
};