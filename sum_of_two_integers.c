int getSum(int a, int b)
{
    /* Given two integers a and b,
     * returns the sum of the two integers
     * without using the operators + and -. */
    unsigned int tmp;
    while (b)
    {
        tmp = (unsigned int)(a & b) << 1;
        a = a ^ b;
        b = tmp;
    }
    return a;
}