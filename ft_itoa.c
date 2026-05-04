#include <stdlib.h>

char    *ft_itoa(int n);
static int  count_digits(long n);

int main(void)
{
    int n;

    n = 5;
    ft_itoa(n);
    return (0);
}

char    *ft_itoa(int n)
{
    long    num;
    int     size;
    char    *res;

    num = n;
    size = count_digits(num);
    res = malloc(sizeof(char) * (size + 1));
    if (!res)
        return (NULL);
    res[size] = '\0';
    if (num == 0)
        res[0] = '0';
    if (num < 0)
    {
        res[0] = '-';
        num *= -1;
    }
    while (num > 0)
    {
        size--;
        res[size] = (num % 10) + '0';
        num /= 10;
    }
    return (res);
}

static int  count_digits(long n)
{
    int count;

    count = 0;
    if (n <= 0)
        count++;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}