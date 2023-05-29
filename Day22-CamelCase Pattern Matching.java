import java.util.*;


class Solution{
    ArrayList<String> CamelCase(int N,String[] Dictionary,String Pattern){
            
            ArrayList<String> res = new ArrayList<>();
            for(int i=0;i<N;i++){
                String s= Dictionary[i];
                int idx=0;
                for(int j=0;j<s.length();j++){
                    char c= s.charAt(j);
                    
                    if((int)c <=90){
                        if(idx<Pattern.length() && c==Pattern.charAt(idx)) idx++;
                        else break;
                    }
                }
                if(idx==Pattern.length()) res.add(s);
            }
            
            if(res.size()<1) {
                res.add("-1");
                return res;
            }
            else{
                Collections.sort(res);
                return res;
            }
        }
    }