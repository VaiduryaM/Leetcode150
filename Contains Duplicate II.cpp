//219. Contains Duplicate II

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        //using maps
        unordered_map<int,int> dup;

        for(int i=0; i<nums.size();i++){
            if(dup.find(nums[i]) != dup.end()){

                if(abs(i-dup[nums[i]])<=k) return true;

            }
            //use value as the index it is found at!
            dup[nums[i]] = i;
        }

        return false;

        /*
        //time limit exceeds - 2 for loops, unnecessary check for min
        int minK = INT_MAX;

        for(int i=0; i<nums.size()-1;i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]==nums[j]){
                    minK = min(minK, abs(i-j));
                }
                else
                    continue;
            }
        }

        if(minK <= k) return true;
        else return false;

        */
        
    }
};