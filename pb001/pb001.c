#include <unistd.h>

void    put_nbr(int nb)
{
    if (nb >= 10)
        put_nbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}

// Test
int main(void)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (i < 1000)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum = sum + i;
        i++;
    }
    put_nbr(sum);
    write(1,"\n", 1);
    return (0);
}