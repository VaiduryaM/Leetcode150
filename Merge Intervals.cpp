//56. Merge Intervals


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
    //lets sort
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ret;
    //rest same
    for(vector<int> interval : intervals){
      if(ret.empty() || ret.back()[1] < interval[0]) ret.push_back(interval);

      else ret.back()[1] = max(ret.back()[1], interval[1]);
    }

    return ret;


    /*
    //C++20 solution
    vector<vector<int>> ret;
    std::ranges::sort(intervals);

    for (const vector<int>& interval : intervals)
      if (ret.empty() || ret.back()[1] < interval[0]) ret.push_back(interval);        
      else ret.back()[1] = max(ret.back()[1], interval[1]);        

    return ret;
    */
    }
};
