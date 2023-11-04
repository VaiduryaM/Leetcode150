//201. Bitwise AND of Numbers Range
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        //TC: O(n)
        int shift =0;
        while(left!=right){
            left >>= 1;
            right >>= 1;
            shift++;
        }
        return left<<shift;
        

        /* 
        //timit limit exceed
        if(left == 0 && right == 0) return 0;
        while(left <= right){
            left &= right;
            right--;
        }

        return left;
        */

        /*
        //TC: O(log n)?
        if(left == right) return left;
        if(right - left >=1){
            int ret = 0+(rangeBitwiseAnd(left>>1, right>>1) << 1);
            return ret;
        }

        return 0;
        */
        
    }
};