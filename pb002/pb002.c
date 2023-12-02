#include <unistd.h>

void    ft_putnbr(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}

// Return fibonacci index
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
    int i = 0;
    int sum = 0;

    while (ft_fibonacci(i) < 4000000)
    {
        if (ft_fibonacci(i) % 2 == 0)
            sum = sum + ft_fibonacci(i);
        i++;
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
    return (0);
}