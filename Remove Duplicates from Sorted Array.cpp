//26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int ret = 1;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] != nums[i+1]){
                nums[ret] = nums[i+1];
                ret++;
            }
        }

        nums.resize(ret);

        return ret;


        
    }
};