//202. Happy Number

class Solution {
public:
    int squaresSum(int n){
        //cout<<"HI"<<endl;
        int sum = 0;
        while(n>0){
            int rem = n % 10;
            n = n/10;
            sum += rem*rem;
        }
        //cout<<sum<<endl;
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> squares;
        //while(n!= 1 && !squares.count(n)){
        while(n!= 1 && squares.find(n) == squares.end()){
            //cout<<"there"<<endl;
            squares.insert(n);
            n = squaresSum(n);
        }

        return n==1;

        
        
    }
};