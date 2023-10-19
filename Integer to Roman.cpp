//12. Integer to Roman


class Solution {
public:
    string intToRoman(int num) {

        vector<string> thous = {"", "M", "MM", "MMM"};
        vector<string> hund = {"", "C", "CC", "CCC","CD","D","DC","DCC","DCCC","CM"};

        vector<string> tens = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};

        vector<string> ones = {"","I","II","III","IV","V","VI","VII","VIII","IX"};

        /*
        1256
        1256/1000 = 1
        1256 % 1000 = 256/100 = 2
        1256%100 =  56/10 = 5
        1256 % 10 = 6
        */
        return (thous[num/1000]+hund[(num%1000)/100]+tens[(num%100)/10]+ones[num%10]);
        
    }
};