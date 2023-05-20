#include<bits/stdc++.h>
using namespace std;

//problem link
//https://practice.geeksforgeeks.org/problems/hands-of-straights/1

class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        
        if(N%groupSize  != 0) return false;
        if(N==1 || groupSize==1) return true;
        map<int , int>m;
        for(int &x : hand) m[x]++;
        
        for(auto &pr : m){
            int v = pr.first;
            int c = pr.second;
            if(c==0) continue;
            for(int j=v;j< v + groupSize;j++){
                if(m[j]==0 or m[j]<c ) return false;
                m[j] -= c;
            }
        }
        
        return true;
    }
};


class Solution2 {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        
        if(N%groupSize  != 0) return false;
        if(N==1 || groupSize==1) return true;
        map<int , int>m;
        for(int &x : hand) m[x]++;
        
        for(auto &pr : m){
            int v = pr.first;
            int c = pr.second;
            if(c==0) continue;
            for(int j=v+1;j< v + groupSize;j++){
                if(m[j]==0 or m[j]<c ) return false;
                m[j] -= c;
            }
        }
        
        return true;
    }
};
