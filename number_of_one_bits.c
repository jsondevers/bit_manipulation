int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count = count + 1;
    }
    return count;
}

// Write a function that takes an unsigned integer and returns the number of '1' bits 
// it has(also known as the Hamming weight).