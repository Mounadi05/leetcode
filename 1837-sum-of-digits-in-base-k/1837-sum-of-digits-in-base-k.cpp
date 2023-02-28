class Solution {
public:
    int sumBase(int n, int k) {
        vector<int> res;
        while(n > 0)
        {
            res.push_back(n%k);
            n /= k;
        }
        for(int i = 0; i< res.size()-1;i++)
            res[i+1] += res[i];
        return res.back();
    }
};