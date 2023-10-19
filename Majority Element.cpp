//169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {

       sort(nums.begin(), nums.end());
        return(nums[nums.size()/2]);

        /*
        int ret = 0;
        int maj = ceil(nums.size()/2);
        cout<<maj<<endl;
        std::map <int, int> freq;
        map<int, int>:: iterator it;

        int i =0;

        for(auto i : nums){
            it = freq.find(i);
            if(it != freq.end()){
                freq.find(i)-> second++;
            }
            else{
                freq[i]++;
            }
        }


        while(it != freq.end()){
            if(it -> second > maj){
                 ret = it->first;   
                 break;
            }            
        }
        return ret; 
             */
    }
};