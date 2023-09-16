

void moveZeroes(int* arr, int size){
    int i = -1;
    int j = 0;
    while (++i < size)
        if (arr[i])
        {
            arr[j++] = arr[i];
            if (i >= j) arr[i] = 0;
        }
}