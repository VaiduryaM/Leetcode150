//57. Insert Interval


class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {       
        //extended answer
        vector<vector <int>> ret;

        intervals.push_back(newInterval);

        sort(intervals.begin(), intervals.end());

        for(vector<int> interval:intervals){
            if(ret.empty() || ret.back()[1] < interval[0]) ret.push_back(interval);
            else ret.back()[1] = max(ret.back()[1], interval[1]);
        }

        return ret;
        

        /*
        //optimized
        vector<vector<int>> ret;

        for(auto interval: intervals){
            if(interval[1] < newInterval[0]) ret.push_back(interval);
            else if (interval[0] > newInterval[1]) {
                ret.push_back(newInterval);
                newInterval = interval;
            }
            else{
                newInterval[0]=min(newInterval[0], interval[0]);
                newInterval[1]=max(newInterval[1], interval[1]);
            }
        }

        ret.push_back(newInterval);
        return ret;
        */
        
        /*
        //optimized more
         vector<vector<int>> ans;
        int k=-1;
//finding the index where we can insert newInterval
        for(int i=0;i<intervals.size();i++){
              if(intervals[i][1]>=newInterval[0]){
                  k=i;
                  break;
              }
              else{
                  ans.push_back(intervals[i]);
              }
        }
//just like mergeIntervals problem just start from the index where we break from prev loop
//taking k as -1 because if we didnt find breaking point then it will just newInterval 
//cond-newIntervals end >= interavals first,then update newIntervals start n end 
        for(int j=k;j<intervals.size();j++){
            if(newInterval[1]>=intervals[j][0]){
                newInterval[0]=min(newInterval[0],intervals[j][0]);
                newInterval[1]=max(newInterval[1],intervals[j][1]);
            }
            else {
                ans.push_back(newInterval);
                newInterval=intervals[j];
            }
        }
 //at last iteration ,try dry run the temp remains so we push it and return
        ans.push_back(newInterval);
        return ans;
    */
    }
};