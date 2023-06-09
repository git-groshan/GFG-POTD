//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        
        string num = "";
        for(int i=1;i<=n;i++){
            num+=to_string(i);
        }
        while(--k){
            next_permutation(num.begin() , num.end());
        }
        
        return num;
        
        /*
         string s;
        for(int i=1;i<=n;i++)
        s+=to_string(i);
        k-=1;
        while(k--)
        {
            next_permutation(s.begin(),s.end());
        }
        return s;
        */
        
    }
};
class Solution2{
public:
    string kthPermutation(int n, int k){
        string h="";
        int chk=1;
        for(int i=1;i<=n;i++){
            h+=to_string(i);
            chk*=i;
        }
        string ans="";
        int i=0,g=0,r=0;
        while(i<n){
           r=chk/(n-i),g=k/r;
           if(k%r==0) g--;
           ans+=h[g];
           h.erase(h.begin()+g);
           k=k-(r)*(g);
           i++;
           chk=r;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends


/*
// Problem link
//https://practice.geeksforgeeks.org/problems/find-kth-permutation-0932/1
 Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(N)

Constraints:
1 <= N <= 9
1 <= K <= N!

*/