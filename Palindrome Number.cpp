//9. Palindrome Number


class Solution {
public:
    bool isPalindrome(int x) {

        /*
        //solution 1 - using string comparison
        string j = to_string(x);
        string i = j;
        reverse(i.begin(), i.end());

        if(i==j) return true;
        else return false;
        */

        //Solution 2 - using math
        long long number = x;
        long long reversed = 0;

        while(x>0){
            int d = x%10;
            reversed = (reversed*10)+d;
            x /= 10;
        }

        return number==reversed;
        
    }
};