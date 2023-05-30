#include<bits/stdc++.h>
using namespace std;

//Problem link 
//https://practice.geeksforgeeks.org/problems/word-search/1

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
class Solution {
public:
    
    bool solve(int i,int j,string &s,vector<vector<char>>&b,int n,int m,vector<vector<int>>&vis){
        if(s.empty())return true;
        if(i<0||j<0||i>=n||j>=m||vis[i][j]||b[i][j]!=s[0])return false;
        vis[i][j]=1;
        bool chk=false;
        for(int k=0;k<4;k++){
            string tmp=s.substr(1);
            chk|=solve(i+dx[k],j+dy[k],tmp,b,n,m,vis);
        }
        vis[i][j]=0;
        return chk;
    }
    bool isWordExist(vector<vector<char>>&b, string s) {
        int n=b.size();
        int m=b[0].size();
        vector<vector<int>>vis(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)if(b[i][j]==s[0]){
                if(solve(i,j,s,b,n,m,vis))return 1;
            }
        }
        return 0;
    }
};