class MyStack {
public:
    queue<int> s;
    queue<int> temp;
    MyStack() {
        
    }
    
    void push(int x) {
        temp.push(x);
        while(!s.empty()){
            temp.push(s.front());
            s.pop();
        }
        swap(temp,s);
    }
    
    int pop() {
        int res=s.front();
        s.pop();
        return res;
    }
    
    int top() {
        return s.front();
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */