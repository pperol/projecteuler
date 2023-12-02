#include <stdio.h>

long long	ft_find_largest_prime(long long number) 
{
    long long i = 3;

    // Divide by 2 until it becomes odd
    while (number % 2 == 0)
        number /= 2;

    // Divide by odd numbers starting from 3
    while (i * i <= number) 
	{
        while (number % i == 0) 
            number /= i;
        i += 2;
    }

    // If the remaining number is a prime greater than 2
    if (number > 2)
        return number;

    // Return the last prime factor found
	return (i);
}

int	main(void) 
{
	long long number = 600851475143;
    long long largest_prime_factor = ft_find_largest_prime(number);

    printf("The largest prime factor of %lld is %lld\n", number, largest_prime_factor);

    return 0;
}
