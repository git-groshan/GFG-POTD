#include<bits/stdc++.h>
using namespace std;

// problem link
//https://practice.geeksforgeeks.org/problems/cutting-binary-string1342/1

/*
class Solution{
    public:
    
    bool isPowerOf5(string s){
        int n = s.size();
        int base = 1;
        long long ans  = 0;
        for(int i=n-1;i>=0 ;i--){
            ans += (s[i] - '0')*base;
            base*=2;
        }
        if(ans%5==0) return true;
        return false;
    }
    int cuts(string s){
        //code
        
        int n = s.size();
        if(n==0 or s[0]=='0') return -1;
        
        if(isPowerOf5(s)) return 1;
        int cut = INT_MAX;
        
        for(int i=0;i<n;i++){
            string left = s.substr(0 , i);
            string right = s.substr(i);
            if(isPowerOf5(left)){
                int cutRight = cuts(right);
                if(cutRight = -1) cut = min(cut , 1 + cutRight);
            }
        }
        if(cut != INT_MAX) return cut;
        return -1;
        
    }
};

*/

class Solution{
    public:
    bool isPowerOfFive(string s) {
    int n = s.length();
    if (n == 0) return false;
    if (s[0] == '0') return false;  
    long long num = 0;
    for (int i = 0; i < n; i++) {
        num = num * 2 + (s[i] - '0');
    }
    if (num == 0) return false;  
    while (num > 1) {
        if (num % 5 != 0) return false;
        num /= 5;
    }
    return true;
}
int cuts(string s) {
    int n = s.length();
    if (n == 0 || s[0] == '0')
        return -1;
    if (isPowerOfFive(s))
        return 1;
    int minCuts = INT_MAX;
    for (int i = 1; i < n; i++) {
        string left = s.substr(0, i);
        string right = s.substr(i);
        if (isPowerOfFive(left)) {
            int cutsRight = cuts(right);
            if (cutsRight != -1)
                minCuts = min(minCuts, 1 + cutsRight);
        }
    }
    if (minCuts != INT_MAX)
        return minCuts;
    return -1; 
}
};