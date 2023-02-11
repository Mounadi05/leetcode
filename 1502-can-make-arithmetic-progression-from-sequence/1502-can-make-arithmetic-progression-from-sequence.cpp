class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int dist = arr[0] - arr[1];
        int flag = 1;
        for(int i = 1 ; i < arr.size() - 1; i++)
            if (arr[i] - arr[i+1] != dist)
            {    
                flag = 0;
                break;
            }            
        if (flag == 1) return true;
        sort(arr.begin(), arr.end(), greater());
        dist = arr[0] - arr[1];
        for(int i = 1 ; i < arr.size() - 1 ; i++)
        if (arr[i] - arr[i+1] != dist)
        {    
            flag = 0;
            break;
        }
        return flag;
                
    }
};