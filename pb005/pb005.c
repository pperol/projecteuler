#include <stdio.h>

// Function to calculate the Greatest Common Divisor
long long ft_gcd(long long x, long long y)
{
    long long tmp;
    while (y != 0) 
    {
        long long tmp = y;
        y = x % y;
        x = tmp;
    }
    return (x);
}

// Function to calculate the Least Common Multiple
long long ft_lcm(long long x, long long y)
{
    return ((x * y) / ft_gcd(x, y));
}

// Function to calculate the LCM of even numbers from 1 to n
long long ft_calc_lcm(int n)
{
    long long result = 1;
    int i = 1;
    while (++i <= n)
        result = ft_lcm(result, i);
    return (result);
}

int main(void) 
{
    int n = 20;
    long long result = ft_calc_lcm(n);
    printf("The smallest positive number that is evenly divisible by all numbers from 1 to %d is: %lld\n", n, result);
    return (0);
}