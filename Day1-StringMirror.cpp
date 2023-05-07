class Solution{
public:
    string stringMirror(string str){
        // Code here
        //Method 1
        /*
        int i = 0 , n = str.size();
        string ans="";
        ans.push_back(str[0]);
        
        for(int i=1;i<n;i++){
            if(str[i-1]>str[i] || (i>1 and str[i-1]==str[i])) ans.push_back(str[i]);
            else break;
        }
        string rev = ans;
        reverse(rev.begin() , rev.end());
        ans+=rev;
        return ans;
        */
        
        //Method 2 
        int n= str.size();
        int idx = 0;
        for(int i=1;i<n;i++){
            if(str[0]==str[1]) break;
            if(str[i]<=str[i-1]) idx = i;
            else break;
        }
        
        string s = str.substr(0 , idx+1);
        string t = s;
        reverse(t.begin() , t.end());
        
        return s + t;
    }
};