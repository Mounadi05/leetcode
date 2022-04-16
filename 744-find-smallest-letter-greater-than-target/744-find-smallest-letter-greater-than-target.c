

char nextGreatestLetter(char* l, int size, char t){
    int i = -1;
    while (++i < size)
        if (l[i] > t)
            return (l[i]);
    return (l[0]);
}