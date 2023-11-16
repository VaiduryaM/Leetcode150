//153. Find Minimum in Rotated Sorted Array


class Solution {
public:
    int findMin(vector<int>& nums) {
       
       int l = 0;
       int r = nums.size()-1;
       int mid;

       while(l<r){
           mid = (l+r)/2;

           if(nums[mid] < nums[r]) r = mid;
           else l = mid+1;
       }

       return nums[l];
       
       
        /*
        //Solution n
        sort(nums.begin(), nums.end());
        return nums[0];
        */
    }
};