//392. Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {

        //BRUTE FORCE        
        int i = 0;
        int j = t.length();
        
        if(!t.length() && s.length()) return false;

        //if(!t.length() && !s.length()) return false;

            for(int k=0; k<s.length();k++){
                int f = t.substr(i,j).find(s[k]);
                if( f != string::npos){
                    i=i+f+1;
                }
                else
                return false;
            }
        

        return true;
                
    }
};