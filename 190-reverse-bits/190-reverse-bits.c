uint32_t reverseBits(uint32_t n) {
    uint32_t m = 0;
    int i = 32;
    m |= n&1;
    while(n > 0 && --i > 0)
    {
        n>>=1;
        m<<=1;
        m |= n&1;
    }
    while(--i > 0)m<<=1;
    return m;
}