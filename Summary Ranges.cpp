//228. Summary Ranges


class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;

        for(int i =0; i<nums.size(); i++){
            int begin = nums[i];

            while(i+1 < nums.size() && nums[i] == nums[i+1]-1) i++;

            int end = nums[i];

            if(begin == end) res.push_back(to_string(begin));
            else res.push_back(to_string(begin)+"->"+to_string(end));
        }

        return res;

        /*
        vector<string> rang;
        int j = nums.size();
        if(j == 1) {
            rang.push_back("\""+to_string(nums[0])+"\"");
            return rang;
        } 

        int start = nums[0];
        int end = INT_MAX;
        for(int i=1; i<j-2;i++){
            //where are you comparing start and the i index????????????
            if(nums[i]+1 == nums[i+1]) continue;

            else{
                end = nums[i];
                string a = makeRange(end, start);
                rang.push_back(a);
                start = nums[i+1];
            }
        }

        if(start == nums[j-1]) 
        {
            string a = makeRange(end)
        }
        */

        
        /*int i = 0;
        int j = nums.size();
        bool start = false;

        if(j == 1) {
            rang.push_back("\""+to_string(nums[0])+"\"");
            return rang;
        } 

        //int start = nums[0];
        
        while(i<j){
            int start
            if(++start = nums[i]) continue;
            else{
                rang.push_back("\""+to_string(nums[0])+"\"");
            }

        }*/


        
    }
};