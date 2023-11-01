//66. Plus One


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            else digits[i] = 0;
        }
        //incase of 9, 99, 999, 9999, ...
        digits.insert(digits.begin(),1);
        return digits;

        /*
        //partially works
        vector<int> ret;
        long num = 0;
        int mul = 1;

        for(int i=digits.size()-1; i>=0; i--){            
            num = num + digits[i] * mul;
            mul *= 10;
        }

        num = num+1;

        while(num>0){
            int a = num%10;
            ret.push_back(a);
            num /= 10;
        }

        reverse(ret.begin(), ret.end());

        return ret;
        */
    }
};