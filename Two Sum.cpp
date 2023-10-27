//1. Two Sum


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*unordered_map<int, int> m;
        vector<int> ret;
        
        for (int i = 0; i < nums.size(); i++) {
            int bal = target - nums[i];
            if (m.find(bal) != m.end()) {
                ret.push_back(m[bal]);
                ret.push_back(i);
                break;
            } else {
                m.insert({nums[i], i});
            }
        }
        
        return ret;*/
        
        vector<int> res;
        unordered_map<int, int> mapp;
        
        for(int i=0; i<nums.size(); i++){
            int balance = target - nums[i];
            
            if(mapp.find(balance) != mapp.end()){
                //returns index of balanace
                res.push_back(mapp[balance]);
                res.push_back(i);
                break;
            }
            else{
                //insert value and its index
                mapp.insert({nums[i], i});
            }
        }
        return res;
    }
};