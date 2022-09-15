int firstMissingPositive(int* nums, int size){
    int a = INT_MAX;
    int *n = malloc(4 * size);
 
        for(int i = 0; i < size ; i++)
            n[i] = 0;
        for(int i = 0; i < size ; i++)
            if (nums[i] <= size && nums[i] > 0)
                n[nums[i]-1] = nums[i];
        for(int i = 0 ; i < size; i++)
            if (n[i] == 0)
                return i+1;
        return size + 1;

}