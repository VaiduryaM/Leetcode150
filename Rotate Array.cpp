//189. Rotate Array


class Solution {
public:
    void rotate(vector<int>& nums, int k) {        


        //incase k > nums.len()
        k = k%nums.size();
       reverse(nums.begin()+(nums.size()-k), nums.end());

       reverse(nums.begin(), nums.end()-k);

       reverse(nums.begin(), nums.end());
    }
};