//172. Factorial Trailing Zeroes


class Solution {
public:
    /*
    int fact(int n){

        if(n==1 || n==0) return 1;
        else return n*fact(n-1); 
    }
    */

    int trailingZeroes(int n) {

        return n==0? 0: n/5+trailingZeroes(n/5);
        /*
        //doesn't work
        int ret = 0;
        int f = fact(n);
        while(f>0){
            if(f&1) continue;
            else ret++;
            f = f>>1;
        }

        return ret;
        */
        
    }
};