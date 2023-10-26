//137. Single Number II


class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //using bit manipulation
        int ret = 0;

        for(int i =0; i<32; i++){
            int sum =0;
            for(const int n: nums){
                sum += n >> i & 1;
            }
            sum %= 3;
            ret |= sum << i;

        }

        return ret;

        /*
        // using maps
        int ret = -1;
        map<int,int> freq;
        map<int,int> ::iterator it;

        for(int i: nums){
            if(freq.find(i) != freq.end()){
                freq[i]++;
            }
            else freq[i]=1;
        }

        for (it=freq.begin(); it!=freq.end(); ++it){
            if(it->second == 1) ret = it->first;
        }

        return ret;

        */
        
    }
};