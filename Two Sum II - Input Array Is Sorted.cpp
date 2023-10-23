//167. Two Sum II - Input Array Is Sorted


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> res;

        int i = 0;
        int j = numbers.size() -1;
        
        while (i < j){
            int total = numbers[i] + numbers [j];

            if(total < target){
                i++;
            }

            else if (total > target){
                j--;
            }

            else
            {
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
        }

        return res;
    }
};