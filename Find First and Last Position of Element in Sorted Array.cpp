//34. Find First and Last Position of Element in Sorted Array


class Solution {
public:
    
    int leftmost(vector<int>&nums, int target){

        int ret = -1;
        int l = 0;
        int r = nums.size()-1;
        int mid;

        while(l<=r){
            mid = l+(r-l)/2;

            if(nums[mid]==target){
                ret = mid;
                //becuase its leftmost, shift
                r = mid-1;
            }

            else if(nums[mid]<target) l = mid+1;
            else r = mid-1;
        }

        return ret;
    }

    int rightmost(vector<int>&nums, int target){
        int ret = -1;
        int l = 0;
        int r = nums.size()-1;
        int mid;

        while(l<=r){
            mid = l+(r-l)/2;

            if(nums[mid]==target){
                ret = mid;
                //becuase its rightmost, shift
                l = mid+1;
            }

            else if(nums[mid]<target) l = mid+1;
            else r = mid-1;
        }

        return ret;

    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        return {leftmost(nums,target), rightmost(nums,target)};

        /*
        //time limit exceeds - dono why :(
        int leftmost = -1, rightmost = -1;
        int foundAt=-1;
        int l=0;
        int r=nums.size()-1;
        int mid;

        while(l<=r && foundAt != -1){
             mid = l+(r-l)/2;
            if(target==nums[mid]) {
                cout<<"mid:"<<mid;
                foundAt=mid;
                //break;
            }

            else if(target<nums[mid]) r = mid-1;
            else l = mid+1;
        }

        if(foundAt != -1){
            leftmost = foundAt;
            while(leftmost>0 && nums[leftmost-1] == target) leftmost--;

            rightmost = foundAt;
            while(rightmost<nums.size()-1 && nums[rightmost+1] == target) rightmost++;           
        }

        return {leftmost, rightmost};
        */
        
        
    }
};