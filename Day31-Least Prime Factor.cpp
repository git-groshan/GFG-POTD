//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>ans(n+1 , 0);
        ans[1] =1;
        for(int i=2;i<=n;i++){
            int num = i;
            if(num%2==0) ans[i] = 2;
            else{
                for(int j=3;j<=i;j+=2){
                    if(num%j==0) {
                        ans[i] = j;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends


/*
Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N)
//Problem link
//https://practice.geeksforgeeks.org/problems/least-prime-factor5216/1
*/