

int countOdds(int low, int high){
    if(!(low%2) && !(high%2))
        return ((high-low)/2);
    return ((high-low)/2 + 1);
}