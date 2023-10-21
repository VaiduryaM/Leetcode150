//238. Product of Array Except Self


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //multiply postfix product and prefix product
        int n = nums.size();
        vector<int> res(n, 1); //n values initialized to 1 cause product

        //prefix multiply -> at each index multiply all the elements before int
        //store in res cause its memory is not counted
        //time complexity = O(n)
        int prefixMul = 1;
        for(int i =0;i<n;i++){
            res[i] = prefixMul;
            prefixMul = prefixMul * nums[i];
        }

        //postfix multiply -> elements after int
        int postfixMul = 1;
        for(int i= n-1;i>=0;i--){
            res[i] = res[i] * postfixMul; //multiply with prefix values
            postfixMul = postfixMul * nums[i];
        }


        return res;
    }
};