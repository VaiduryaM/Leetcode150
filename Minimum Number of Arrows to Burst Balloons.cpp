//452. Minimum Number of Arrows to Burst Balloons


class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        //greedy algorithm

        int ret = 1;
        sort(points.begin(), points.end(), [](const vector<int>&a, const vector<int> &b){return a[1]< b[1];   });

        int arrow = points[0][1];

        for(int i =1; i< points.size(); i++){
            if(points[i][0] > arrow){
                arrow = points[i][1];
                ret++;
            }
        }


        return ret;
        
    }
};
