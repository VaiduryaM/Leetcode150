//198. House Robber


class Solution {
public:
    int rob(vector<int>& nums) {

        int prev1 = 0;
        int prev2 = 0;

        for(int n:nums){
            int dp = max(prev1, n+prev2);
            prev2 = prev1;
            prev1 = dp;
        }
        
        return prev1;
    }
};