int hammingWeight(uint32_t n) {
    int i = 0;
    int a = 32;
    while (a)
        i = i + ((n >> --a) & 1);
    return (i);
}