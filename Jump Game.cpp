//55. Jump Game



class Solution {
public:
    bool canJump(vector<int>& nums) {

        int maxJ = 0;
        for(int i =0; i<nums.size();i++){
            if(i>maxJ) return false;
            maxJ=max(maxJ, i+nums[i]);
        }

        return true;

        /*
        //not working
        int firstStep = nums[0];
        int i = 0;
        while(firstStep < nums.size()){
            i += firstStep;
            if(i > nums.size()) return false;

            firstStep = nums[i];
            if(firstStep == 0) return false;
        }

        return true;
        */
        
        
    }
};
