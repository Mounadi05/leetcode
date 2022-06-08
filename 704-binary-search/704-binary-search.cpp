 class Solution {
public:
    int search(vector<int>& num, int t) {
    int mid , low , high;
    low = 0;
    high = num.size() - 1;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(num[mid] > t)
            high = mid - 1;
        else if (num[mid] < t)
            low = mid + 1;
        else
            return (mid);
    }
    return(-1);
    }
};
