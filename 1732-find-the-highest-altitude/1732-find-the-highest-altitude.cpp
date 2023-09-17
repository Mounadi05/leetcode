class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> highest(1,0);
        for(int i = 0; i < gain.size();i++)
            highest.push_back(highest[i] + gain[i]);
        return *max_element(highest.begin(), highest.end());
    }
};