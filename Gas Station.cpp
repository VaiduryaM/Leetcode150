//134. Gas Station


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        //greedy algo
        int gasSum = 0;
        int costSum = 0;

        for(int i:gas) gasSum+=i;
        for(int i:cost) costSum+=i;

        if(gasSum<costSum) return -1;

        int start=0;
        int curSum=0;

        for(int i=0;i<gas.size();i++){
            curSum +=gas[i]-cost[i];

            if(curSum<0) {
                // If curSum is negative, reset the starting point to the next station.
                start = i+1;
                curSum=0;
            }
        }

        return start;
    }
};