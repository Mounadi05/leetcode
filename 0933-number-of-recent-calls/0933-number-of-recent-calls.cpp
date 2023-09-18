class RecentCounter {
public:
    int counter;
    vector <int> requests;
    RecentCounter() {
       
    }
    
    int ping(int t) {
        counter = 0;
        requests.push_back(t);
        for(int i : requests)
            if (i <= t && i >= t - 3000)
                counter++;
        return counter;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */