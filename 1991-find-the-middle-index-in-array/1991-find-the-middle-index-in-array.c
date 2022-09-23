

int findMiddleIndex(int* nums, int size){
 int i = -1;
    int a = 0;
    int b = 0;
    int j;
    while(++i < size)
    {
        j = i;
        while(++j < size)
           a += nums[j];
        if (a == b)
            return i;
        b += nums[i];
        a = 0;
    }
    return -1;
}