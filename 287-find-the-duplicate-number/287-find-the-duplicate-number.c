 int findDuplicate(int* nums, int size){
    int tab[100001] = {0};
    for(int i = 0; i < size; i++)
        tab[nums[i]]++;
    for(int i = 0; i < size; i++)
        if (tab[i] > 1)
            return i;
    return 0;
}