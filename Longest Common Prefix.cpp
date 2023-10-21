//14. Longest Common Prefix


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        //assume whole of strs[0] is the longest prefix
        string prefix = strs[0];

        //loop though and compare
        for(int i=1; i<strs.size(); i++){

            while(strs[i].find(prefix) !=0){
                prefix = prefix.substr(0,prefix.length()-1);

                //if length becomes 0 => means no common prefix
                if(prefix.length() == 0) return "";

            }
            

        }

        return prefix;
        
    }
};