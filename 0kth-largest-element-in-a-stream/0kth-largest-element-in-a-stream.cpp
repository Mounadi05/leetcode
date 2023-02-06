class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        _size = k;
        for(int i = 0; i < nums.size(); i++)
            add(nums[i]);
    }
    
    int add(int val) {
        _q.push(val);
        if (_q.size() > _size)
            _q.pop();
        return _q.top();
    }
private :
    priority_queue<int, vector<int>, greater<int>> _q;
    int _size;

};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */