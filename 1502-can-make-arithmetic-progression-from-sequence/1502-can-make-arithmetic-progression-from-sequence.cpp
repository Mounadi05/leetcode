class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int dist = arr[0] - arr[1];
        for(int i = 1 ; i < arr.size() - 1; i++)
            if (arr[i] - arr[i+1] != dist)
                return 0;
        return 1;
                
    }
};