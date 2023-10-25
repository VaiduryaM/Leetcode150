//290. Word Pattern

class Solution {
public:
    bool wordPattern(string pattern, string s) {
    
    //get words
    vector<string> w;
    std::string word; 
    std::istringstream iss(s);
    while (std::getline(iss, word, ' ')) {
        w.push_back(word);        
    }
    map<string, char> sTop;
    map<char, string> pTos;

    //then do usual hash maps stuff
    if(w.size() != pattern.size()) return false;
    if(w.size() == pattern.size()){
        for(int i=0; i<pattern.size();i++){
            char p = pattern[i];
            string wo = w[i];

            if(sTop.find(wo) == sTop.end() && pTos.find(p) == pTos.end()){
                sTop[wo] = p;
                pTos[p] = wo;
            }
            else{
                if(sTop[wo] != p && pTos[p] != wo){
                    return false;
                }
            }
        }
    }

    return true;

    }
};