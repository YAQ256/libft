#include "libft.h"

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i++]);
    }
}
int main(void)
{
    char    str[] = "adios mundo";
    ft_putstr(str);
    return (0);
}