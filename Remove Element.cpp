//27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ret =0;
        for(int i=0;i<nums.size();i++){
            if (nums[i] != val){
                //ret--;
                nums[ret] = nums[i];
                ret ++;
            }
        }
        nums.resize(ret);

        return ret;
    }
};