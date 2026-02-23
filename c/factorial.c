#include <stdio.h>
#include <stdint.h>

// Function to calculate factorial
// Returns 0 for negative input or overflow
uint32_t Factorial(int n)
{
    if (n < 0 || n > 12) // prevent 32-bit overflow
        return 0;

    uint32_t result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    for (int i = 0; i <= 12; i++)
    {
        printf("%d! = %u\n", i, Factorial(i));
    }

    // Test negative input
    int negative = -3;
    printf("%d! = %u (invalid input)\n", negative, Factorial(negative));

    return 0;
}