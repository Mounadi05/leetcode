

int countOdds(int low, int high){
   int a = 0;
    while (low <= high)
    {
        if (low % 2)
        {
            a++;
            low += 2;
        }
        else
            low++;
    }
    return (a);
}