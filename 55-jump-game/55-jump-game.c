  
bool canJump(int* nums, int size){
    int step = 0;
    int i = 0;
    do {
         if (step < nums[i] + i)
            step = nums[i] + i;
    }while(step > i && ++i && i < size);
    return (i >= size - 1);
}