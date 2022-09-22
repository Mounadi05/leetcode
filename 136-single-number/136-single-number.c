

int singleNumber(int* nums, int size){

    int a = 0;
    for(int i = 0; i < size; i++)
        a ^=nums[i];
    return a;
}