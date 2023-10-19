//13. Roman to Integer


class Solution {
public:
    int romanToInt(string s) {
        int ret =0;
        std::map<char,int> rom = {{'I',1}, {'V',5}, {'X',10}, {'L', 50}, {'C',100}, {'D',500}, {'M', 1000}};

        //for straing forward ones - 3,10,etc
        /*for(auto i:s){
            if(rom.find(i) != rom.end()){
                ret += rom.find(i)->second;
            }
        }*/

        /* why use find when its given its always within those
        for (int i = 0; i < s.length(); i++) {

            if(rom.find(s[i]) != rom.end()){
                int curr = rom[s[i]];
                int next = 0;
                if(i+1 < s.length()){
                    next = rom[s[i+1]];
                }

                if(curr < next){
                    ret += next-curr;
                    i++;
                }
                else
                ret += curr;

            }
        }

        */

        //when i=s.length(), it doesnt enter the loop because s[i] will be less than s[i+1]

        for(int i=0; i<s.length();i++){
            if(rom[s[i]] < rom[s[i+1]]){
                ret -= rom[s[i]];
            }
            else{
                ret += rom[s[i]];
            }
        }

        return ret;
    }
};