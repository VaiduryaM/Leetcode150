//3. Longest Substring Without Repeating Characters


class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        //solution 2
        vector<int> count(128);
        int ret=0;

        for(int l=0, r=0; r<s.length();r++){
            ++count[s[r]];
            while(count[s[r]] > 1)
                --count[s[l++]];
            ret = max(ret, r-l+1);
        }

        return ret;

        /*
        //solution 1
        int longest = 0;
        int i =0, j=0;
        unordered_set<char> subs;
        while(i < s.length()){
            while(subs.find(s[i]) != subs.end()){
                subs.erase(s[j]);
                ++j;
            }
            longest = max(longest, i-j+1);
            subs.insert(s[i]);
            ++i;
        }

        return longest;
        */
    }
};