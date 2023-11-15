//274. H-Index


class Solution {
public:
    int hIndex(vector<int>& citations) {

        /*
        //solution 1
        sort(citations.begin(), citations.end(), greater<int>()); //decreasing order
        int h=0;
        for(int i=0; i<citations.size();i++){
            if(citations[i]>=i+1) h=i+1;
            else break;
        }
        return h;
        */


        //solution 2 - binary search

        sort(citations.begin(), citations.end());
        int lo = 0;
        int hi = citations.size()-1;
        int n = citations.size();

        int h=0;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            int i = n-mid;
            if(citations[mid] >= i){
                h = i;
                hi = mid-1;
            }else lo = mid+1;
        }


        return h;


        /*
        //logic flaw
        sort(citations.begin(), citations.end());
        unordered_map<int,int> cite;

        for(auto i:citations){
            if(cite.find(i)!=cite.end()){
                cite[i]++;
            }
            else cite[i] = 1;
        }

        int h=0;
        int count=0;

        for(auto &each:cite){
            int pap=each.first;
            int fre=each.second;

            
            if(fre >= count){
                h=count;
            }else break;
        }

        return h;
        */
    }
};