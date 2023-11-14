//35. Search Insert Position


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        /*
        //solution 1
        int ret;
        for(int i=0; i<nums.size();i++){
            if(nums[i] == target || nums[i]>target) return i;
        }        
        return nums.size();
        */

        //binary search
        int lo = 0;
        int hi = nums.size();
        int mid;

        if(target>nums[hi-1]) return hi;

        while(lo<=hi){
            mid=(lo+hi)/2;
            if(nums[mid]==target) return mid;

            if(target<nums[mid]) hi = mid-1;
            else lo = mid+1;
        }
        
        return lo;
    }
};