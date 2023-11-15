//6. Zigzag Conversion


class Solution {
public:
    string convert(string s, int numRows) {
        
        vector<vector<char>> rows(numRows);
        int k=0;
        int direction = (numRows==1) - 1;

        for(char c:s){
            rows[k].push_back(c);
            if(k==0 || k==numRows-1)
                direction *= -1;
            k+=direction;
        }


        string zigzag;
        for(vector<char> r: rows)
            for(char c:r)
                zigzag+=c;

        return zigzag;
    }
};