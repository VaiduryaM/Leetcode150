//58. Length of Last Word


class Solution {
public:
    int lengthOfLastWord(string s) {

        vector<string> words;
        int start = 0;
        int end = s.find(" ");


        while(end != string::npos){
            words.push_back(s.substr(start,end-start));
            start = end+1;
            end = s.find(" ", start);
        }

        //in case the more words have to be processed
        if(start < s.length()){
            words.push_back(s.substr(start));
        }
        while(words.back().empty()){
            words.pop_back();
        }
        if(!words.back().empty()){
            return words.back().length();
        }

        return 0;
        
    }
};