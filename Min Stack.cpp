//155. Min Stack


class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {

        act.push(val);

        if(mini.empty() || mini.top().first > val){
            mini.push({val, 1});
        }
        //check why maintain second index!
        else if(mini.top().first == val){
            mini.top().second++;
        }
        
    }
    
    void pop() {

        if(act.top() == mini.top().first){
            mini.top().second--;

            if(mini.top().second == 0){
                mini.pop();
            }
        }


        act.pop();

        
    }
    
    int top() {

        return act.top();
        
    }
    
    int getMin() {

        return mini.top().first;
        
    }

private:
  stack<int> act;
  stack<pair<int,int>> mini;    // to get mini
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */