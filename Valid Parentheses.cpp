//20. Valid Parentheses


class Solution {
public:
    bool isValid(string s) {
        
       /* 
       //using if else
       stack<char> temp;
        for(int i = 0; i<s.length(); i++){
            if(temp.empty()){
            temp.push(s[i]);
        }
        else if( (temp.top() == '(' && s[i] == ')') || (temp.top() == '[' && s[i] == ']') || (temp.top() == '{' && s[i] == '}') ){
            temp.pop();
        }
        else
        temp.push(s[i]);
        }
        
        if(temp.empty())
        return true;
        else return false;
        
        */

        //using maps

        stack<char> temp;
        unordered_map<char, char> check = {{'}','{'},{']','['},{')','('}};

        for(const auto &c : s){

            if(check.find(c) != check.end()){
                if(temp.empty())  return false;  
                if(temp.top() != check[c]) return false;
                temp.pop();
            }
            else{
                temp.push(c);
            }
        }

        return temp.empty();



    }
};