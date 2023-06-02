#include<bits/stdc++.h>
using namespace std;

//Problem link 
//https://practice.geeksforgeeks.org/problems/santa-banta2814/1

class Solution{
public:
    vector<int>data;
    
    void dfs(vector<vector<int>>&g , vector<bool>&vis , int src , int &ct){
        vis[src] = true;
        for(auto it : g[src]){
            if(!vis[it]){
            ct++;
            dfs(g , vis , it , ct);
        }
    }
    }
    
    void precompute(){
         vector<bool>prime(1e6+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i<1e6+1;i++){
            if(prime[i]==true){
                data.push_back(i);
                int j=2*i;
                while(j<1e6+1){
                    prime[j]=false;
                    j=j+i;
                }
            }
        }
        
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        vector<bool>vis(n+1 , false);
        int ans =0;
        for(int i=1;i<=n;i++){
            int count = 1;
            if(!vis[i]){
                dfs(g , vis , i , count);
                ans = max(ans , count);
            }
        }
        if(ans==1) return -1 ;
        
        return data[ans-1];
        
    }
};