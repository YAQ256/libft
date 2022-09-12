#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int sign;
    int nb;

    i = 0;
    sign = 1;
    nb = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = (str[i] - '0') + (nb * 10);
        i++;
    }
    return (nb * sign);
}