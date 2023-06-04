//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

//problem link 
//https://practice.geeksforgeeks.org/problems/reversing-the-equation2205/1




// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
       string ans="";
            stack<string>st;
            for(int i=0;i<s.length();i++){
                if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*'){
                    st.push(ans);
                    ans=s[i];
                    st.push(ans);
                    ans="";
                }
                else{
                ans+=s[i];
                }
            }
            st.push(ans);
            
            string res="";
            while(!st.empty()){
                res+=st.top();
                st.pop();
            }
            
            return res;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends