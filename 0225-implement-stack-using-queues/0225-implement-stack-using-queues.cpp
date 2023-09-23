class MyStack {
public:
    queue<int> s;
    queue<int> temp;
    MyStack() {
     
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        int n;
        while(s.size() > 0)
        {
            n = s.front();
            s.pop();
            if(!s.empty())temp.push(n);
        }
        s = temp;
        while(!temp.empty()) temp.pop();
        return n;
    }
    
    int top() {
        return s.back();
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