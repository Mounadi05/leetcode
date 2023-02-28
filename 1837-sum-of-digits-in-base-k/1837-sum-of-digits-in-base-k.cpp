class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        vector<int> res;
        while(n > 0)
        {
            res.push_back(n%k);
            n /= k;
        }
        for(int i = 0; i< res.size();i++)
            sum += res[i];
        return sum;
    }
};