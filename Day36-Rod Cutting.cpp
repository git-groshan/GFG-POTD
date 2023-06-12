//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++


class Solution{
  public:
  
    int f(int i , int price[] , int n , vector<vector<int>>&dp){
        if(i==0) return n*price[0];
        if(dp[i][n]!=-1) return dp[i][n];
        int notTake = 0 + f(i-1 , price , n , dp);
        int Take = INT_MIN;
        int rod_length = i + 1;
        if(rod_length<=n) Take = price[i] + f(i , price , n-rod_length , dp);
        
        return dp[i][n] = max(Take , notTake);
    }
    int cutRod(int price[], int n) {
        //code here
        // int dp[n][n+1];//idx,length
        vector<vector<int>>dp(n , vector<int>(n+1 , -1));
        // memset(dp , -1 , sizeof(dp));
        return f(n-1 , price , n , dp);
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

//Problem link
//https://practice.geeksforgeeks.org/problems/rod-cutting0840/1

/*
Rod Cutting
MediumAccuracy: 60.66%Submissions: 73K+Points: 4
Getting a High Paying Job Now Easier Than Today's Problem! Apply For Mega Job-A-Thon  

Given a rod of length N inches and an array of prices, price[]. price[i] denotes the value of a piece of length i. Determine the maximum value obtainable by cutting up the rod and selling the pieces.

Note: Consider 1-based indexing.

Example 1:

Input:
N = 8
Price[] = {1, 5, 8, 9, 10, 17, 17, 20}
Output:
22
Explanation:
The maximum obtainable value is 22 by 
cutting in two pieces of lengths 2 and 
6, i.e., 5+17=22.
Example 2:

Input:
N=8
Price[] = {3, 5, 8, 9, 10, 17, 17, 20}
Output: 
24
Explanation: 
The maximum obtainable value is 
24 by cutting the rod into 8 pieces 
of length 1, i.e, 8*3=24. 
Your Task:  
You don't need to read input or print anything. Your task is to complete the function cutRod() which takes the array A[] and its size N as inputs and returns the maximum price obtainable.

Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 1000
1 ≤ Ai ≤ 105
*/
