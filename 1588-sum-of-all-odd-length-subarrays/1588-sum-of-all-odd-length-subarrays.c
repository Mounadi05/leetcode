

int sumOddLengthSubarrays(int* arr, int size){
    int i = -1, j = 0,k = 0 ,sum = 0;
    while (++i < size)
    {
        j = i;
        while(j < size)
        {
            k = i;
            while (k <= j)
                sum +=arr[k++];
            j += 2;
        }
    }
    return (sum);
}