
int missingNumber(int* num, int size){
    int a = 0;
    int i = 0;
    while(i < size)
        a += num[i++];
   return ((size * (size+1)/2) - a) ;
}