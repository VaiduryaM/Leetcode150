//383. Ransom Note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        map<char,int> magLetters;

        for(char m: magazine){
            if(magLetters.find(m) != magLetters.end())
            {
                magLetters[m]++;
            }
            else{
                magLetters[m]=1;
            }
        }


        for(char r: ransomNote){
            if(magLetters.find(r) != magLetters.end()){
                if(magLetters[r]>1){
                    magLetters[r]--;
                }
                else{
                    magLetters.erase(r);
                }
            }

            else{
                return false;
            }
        }

        return true;
        
    }
};