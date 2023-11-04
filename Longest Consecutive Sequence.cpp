//128. Longest Consecutive Sequence


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int longest = 0;

        unordered_set seq(nums.begin(), nums.end());

        for (auto &ele : seq){
        //check if this element is the start of the sequence = no previous value element present
            //set.count() counts elements with specific value
            if(!seq.count(ele-1)){
                int length = 1;
                //next find the successors
                //add length because successors from ele; +1 wont do the same
                while(seq.count(ele+length))
                    ++length;
                longest = max(longest, length);                 
            }
        }

    return longest;

    }
};