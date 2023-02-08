class Solution {
public:
    bool self(int n)
    {
        if (n < 9) return true;
        int a = n;
        while(n > 0)
        {
            int m = n%10;
            n /= 10;
            if(m == 0)return false;
            if (a %m)return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> res;
        for(int i = left ; i <= right ; i++)
            if (self(i))
                res.push_back(i);
        return res;
    }
};