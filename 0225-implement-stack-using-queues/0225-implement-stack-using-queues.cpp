class MyStack {
public:
    queue<int> s;
    queue<int> temp;
    int size;
    MyStack() {
        size = 0;
     }
    
    void push(int x) {
        s.push(x);
        size++;
    }
    
    int pop() {
        int n;
        for(int i = 0; i < size-1 &&!s.empty() ;i++)
        {
            n = s.front();
            temp.push(n);
            s.pop();
        }
        n = s.back();
        s.pop();
        s = temp;
        while(!temp.empty()) temp.pop();
        size--;
        return n;
    }
    
    int top() {
        return s.back();
    }
    
    bool empty() {
        return (size == 0);
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