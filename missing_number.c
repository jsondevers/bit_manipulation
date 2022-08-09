// The basic idea is to use XOR operation. We all know that a^b^b =a, which means two xor operations with the same number will eliminate the number and reveal the original number.
// In this solution, I apply XOR operation to both the index and value of the array. In a complete array with no missing numbers, the index and value should be perfectly corresponding( nums[index] = index), so in a missing array, what left finally is the missing number.
int missingNumber(int *nums, int numsSize)
{
    int xor = 0, i = 0;
    for (i = 0; i < numsSize; i++)
    {
        xor = xor^i ^ nums[i];
    }

    return xor^i;
}

// Since the n numbers are from [0, n], we can just add all the numbers from [0, n] together and minus the sum of the n-1 numbers in array.
int missingNumber(int *nums, int numsSize)
{
    int sum = numsSize;
    for (int i = 0; i < numsSize; i++)
        sum += i - nums[i];
    return sum;
}
