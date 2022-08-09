/* iterate over all the bits */
uint32_t reverseBits(uint32_t n)
{
    uint32_t m = 0;
    for (int i = 0; i < 32; i++)
    {
        m = m << 1; // multiply by two
        m = m | (n & 1);
        n = n >> 1; // divide by two
    }
    return m;
}