//49. Group Anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string> > result;
    map<string, vector<string> > words;
    
    for (int i = 0; i < strs.size(); i++)
    {
        string str = strs[i];
        sort(str.begin(), str.end());
        words[str].push_back(strs[i]);
    }
    
    for (map<string, vector<string> >::iterator it = words.begin(); it != words.end(); ++it)
        result.push_back(it->second);
    
    return result;
    }
};