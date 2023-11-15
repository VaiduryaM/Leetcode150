//45. Jump Game II


class Solution {
public:
    int jump(vector<int>& nums) {

        //BFS itssems
        int jump=0, end=0, far=0;
        for(int i=0;i<nums.size()-1;i++){
            far=max(far, i+nums[i]);
            if(far>=nums.size()-1) {
                jump++;
                break;
            }

            if(i==end) {
                jump++;
                end=far;
            }
        }

        return jump;
    }
};