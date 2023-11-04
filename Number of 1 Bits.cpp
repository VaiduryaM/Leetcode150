//191. Number of 1 Bits


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        int bit = 0;
        //cout<<"first:"<<n<<endl;
        while (n!=0){
            bit = n & 1;
            //cout<<"bit:"<<bit<<"  n::"<<n<<endl;
            if (bit == 1) ret++;

            n = n>>1;

        }


        return ret;
    }
};
