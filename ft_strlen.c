//#include <stddef.h>
//#include <stdio.h>

size_t  ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
/*int main(void)
{
    char    str[] = "Hola mundo";
    printf("la longitud es = %ld\n", ft_strlen(str));
}*/