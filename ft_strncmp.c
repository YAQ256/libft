//#include <stdio.h>
//#include <string.h>

int ft_strncmp(char *str1, char *str2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    if (i != n)
        return (str1[i] - str2[i]);
    return (0);
}

/*int main(void)
{
    char    str1[] = "secta 42";
    char    str2[] = "secta";
    printf("%d\n", ft_strncmp(str1, str2, 10));
    printf("%d\n", strncmp(str1, str2, 10));
}*/
