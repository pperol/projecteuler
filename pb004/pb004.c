#include <stdio.h>

// Check if number a palindrome?
int ft_check_palindrome(int nb) 
{
    int number = nb;
    int rev_nbr = 0;

    while (nb > 0) 
    {
        rev_nbr = rev_nbr * 10 + nb % 10;
        nb /= 10;
    }
    return (number == rev_nbr);
}

// Largest palindrome made from the product of two numbers below n
int find_largest_alindrome(int n) 
{
    int max_palindrome = 0;
    int product;
    int i = 0;

    while (i < n) 
    {
        int j = 0;
        while (j < n) 
        {
            product = i * j;
            if (ft_is_palindrome(product) && product > max_palindrome)
                max_palindrome = product;
            j++;
        }
        i++;
    }
    return (max_palindrome);
}

int main(void) 
{
    printf("The largest palindrome made from the product of two 3-digit numbers is: %d\n", find_largest_alindrome(1000));
    return (0);
}
