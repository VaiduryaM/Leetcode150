//80. Remove Duplicates from Sorted Array II


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //solution 1:
        /*
        int k =0;
        for(auto i : nums){
            if(k==0 || k==1 || nums[k-2] != i){
                nums[k] = i;
                k++;
            }
        }
        nums.resize(k);
        return k;
        */


        //solution 2: optimized -> faster
        int k = 1;
        bool twoInARow = false;

        for(int i =0; i<nums.size()-1;i++){

            if(nums[i+1] > nums[i]){
                twoInARow = false;
                nums[k++] = nums[i+1];
            }

            else if(nums[i+1] == nums[i] && twoInARow == false){
                twoInARow = true;
                nums[k++] = nums[i+1];
            }

        }
        nums.resize(k);
        return k;


    }
};