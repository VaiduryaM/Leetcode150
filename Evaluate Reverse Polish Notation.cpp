//150. Evaluate Reverse Polish Notation


class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        //practice:
        stack<int> nums;

        for(int i=0; i<tokens.size();i++){
            string ch = tokens[i];
            if(ch.size()> 1 || isdigit(ch[0])){
                nums.push(stoi(ch));
                continue; // because its a num, only go next if operator since number, get next
            }

            int eval = 0;
            int val1 = nums.top();
            nums.pop();

            int val2 = nums.top();
            nums.pop();

            if(ch == "+"){
                eval = val1+val2;
            }

            else if(ch == "-"){
                eval = val2-val1;
            }

            else if(ch == "*"){
                eval = val1*val2;
            }

            else{
                eval = val2/val1;
            }
            nums.push(eval);



        }

        return nums.top();

        /*
        stack<int> nums;

        for(int i = 0; i<tokens.size(); i++){
            cout<<"enter"<<endl;
            string temp = tokens[i];
            cout<<"temp:"<<temp<<"size:"<<temp.size()<<endl;
            if(temp.size() > 1 || isdigit(temp[0]))
            {
                nums.push(stoi(temp));
                cout<<"continue hit"<<endl;
                continue; //why = 
            }
            cout<<"after"<<endl;
            int int2 = nums.top();
            nums.pop();

            int int1 = nums.top();
            nums.pop();

            int eval = 0;
            if(temp == "+"){
                eval = int1+int2;
            }

            else if(temp == "-"){
                eval = int1-int2;
            }

            else if(temp == "*"){
                eval = int1*int2;
            }

            else{
                eval = int1/int2;
            }
            nums.push(eval);         

        }

        return nums.top();
        */
    }
};