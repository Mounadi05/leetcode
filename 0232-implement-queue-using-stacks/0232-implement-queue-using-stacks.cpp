class MyQueue {
public:
    vector<int> q;
    MyQueue() {
    }
    
    void push(int x) {
        q.insert(q.begin(),x);
    }
    
    int pop() {
       int n = q.back();
         q.pop_back();
        return n;
    }
    
    int peek() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */