//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  
    string longestPalin (string s) {
        // code here
        int n =s.length(); 
        vector<vector<int>>dp(n , vector<int>(n, 0 )) ; 
        
        int l =0 , ii =0 ,jj =0 ;
        
        for(int g=0 ; g<n ;g++ )
        {
            for(int i=0 ,j=g ;j<n ;i++,j++ )
            {
                
                if(g==0)
                dp[i][j]=1; 
                else if(g==1 && s[i]==s[j])
                dp[i][j]=1 ;
                else
                {
                    if(s[i]==s[j] && dp[i+1][j-1])
                    dp[i][j] =1 ;
                }
                
                if(dp[i][j] && j-i+1 >l )
                {
                    l = j-i+1 ;
                    ii=i ;
                    jj =j ;
                }
                
            }
        }
        string ans = s.substr(ii, jj-ii+1) ;
        return ans ;
        
    }
};


// solution 2

class Solution {
  public:
    string longestPalin (string S) {
        // code here
         string ans="";
        int len=0;
        for(int i=0;i<S.size();i++)
        {
            int left=i,right=i;
            while(left>=0 && right<S.size() && S[left]==S[right])
            {
                if((right-left+1)>len)
                {
                    len=right-left+1;
                    ans=S.substr(left,right-left+1);
                }
                left--;
                right++;
            }
            int l=i,r=i+1;
            while(l>=0 && r<S.size() && S[l]==S[r])
            {
                if((r-l+1)>len)
                {
                    len=r-l+1;
                    ans=S.substr(l,r-l+1);
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


//https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1

/*
Longest Palindrome in a String
MediumAccuracy: 23.2%Submissions: 245K+Points: 4
Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string that reads the same backward. More formally, S is a palindrome if reverse(S) = S. In case of conflict, return the substring which occurs first ( with the least starting index).

Example 1:

Input:
S = "aaaabbaa"
Output: aabbaa
Explanation: The longest Palindromic
substring is "aabbaa".
Example 2:

Input: 
S = "abc"
Output: a
Explanation: "a", "b" and "c" are the 
longest palindromes with same length.
The result is the one with the least
starting index.
Your Task:
You don't need to read input or print anything. Your task is to complete the function longestPalin() which takes the string S as input and returns the longest palindromic substring of S.

Expected Time Complexity: O(|S|2).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ |S| ≤ 103
*/