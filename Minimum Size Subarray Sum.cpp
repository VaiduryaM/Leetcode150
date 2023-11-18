//209. Minimum Size Subarray Sum


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int minLen = INT_MAX;
        int sum = 0;
        for(int l=0, r=0; r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){
                minLen = min(minLen, r-l+1);
                sum -= nums[l++];
            }
        }
        return (minLen != INT_MAX)? minLen:0;
    }
};