class Solution {
public:
    void merge(std::vector<int>& arr, int left, int middle, int right) {
    int L = middle - left + 1;
    int R = right - middle;

    std::vector<int> leftArr(L);
    std::vector<int> rightArr(R);

    for (int i = 0; i < L; i++) leftArr[i] = arr[left + i];
    for (int i = 0; i < R; i++) rightArr[i] = arr[middle + 1 + i];
        
    int i = 0; 
    int j = 0;  
    int k = left;  

    while (i < L && j < R) 
    {
        if (leftArr[i] <= rightArr[j]) arr[k] = leftArr[i++];
        else arr[k] = rightArr[j++];
        k++;
    }
    
    while (i < L) arr[k++] = leftArr[i++];
    
    while (j < R) arr[k++] = rightArr[j++];
 
}
    vector<int> sortArray(vector<int>& nums) 
    {
           int n = nums.size();
           for (int i = 1; i < n; i *= 2)
           {
               for (int left = 0; left < n - 1; left += 2 * i) 
               {
                    int mid = std::min(left + i - 1, n - 1);
                    int right = std::min(left + 2 * i - 1, n - 1);
                    merge(nums, left, mid, right);
               }
           }
        return nums;
    }
};